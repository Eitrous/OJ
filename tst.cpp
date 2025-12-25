#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

// 既然是备战ICPC，就要养成好习惯，不要乱开全局变量，但DP表这种大东西例外。
// dp[题目序号][当前分数][连续错误][已用放弃]
// 题目最多18题，所以用index 0~18。
// 分数最高可能稍微超过120（例如119+10=129），开200足够。
// 连续错误0~2。
// 放弃0~3。
long long dp[20][200][4][4]; 
long long final_ans[200]; // 记录最终分数为x的方案数

int main() {
    // 这种题目输入输出量不大，但这句加速是基本素养。
    ios::sync_with_stdio(false);
    cin.tie(0);

    // 初始化
    // 假设初始分数为10。如果是0分，改这里即可。根据经验这类题默认10分。
    int start_score = 0; 
    
    // 第1题之前，状态为：分数start_score, 连错0, 放弃0。方案数1。
    dp[1][start_score][0][0] = 1;

    // 开始DP：遍历题目 i 从 1 到 18
    for (int i = 1; i <= 18; ++i) {
        for (int s = 0; s < 150; ++s) { // 遍历分数
            for (int w = 0; w < 3; ++w) { // 遍历连错
                for (int sk = 0; sk <= 3; ++sk) { // 遍历放弃次数
                    
                    if (dp[i][s][w][sk] == 0) continue;
                    
                    long long count = dp[i][s][w][sk];

                    // --- 决策1：答对 ---
                    int next_s_right = s + 10;
                    if (next_s_right >= 120) {
                        // 达到120分，立即停止，计入最终结果
                        final_ans[next_s_right] += count;
                    } else {
                        // 未达到，进入下一题状态
                        // 注意：这里 i+1 可能会越界到 19，用来统计“答完所有题目”的情况
                        dp[i+1][next_s_right][0][sk] += count;
                    }

                    // --- 决策2：答错 ---
                    int next_s_wrong;
                    if (s <= 30) {
                        next_s_wrong = 0;
                    } else {
                        // 题目公式：(18 - i) / 36
                        // 注意整数运算，这里题目暗示直接取整
                        int deduct = (int)(s * (18 - i) / 36.0);
                        next_s_wrong = s - deduct;
                    }
                    int next_w = w + 1;
                    if (next_w < 3) { // 只有连错没到3次才能继续
                        dp[i+1][next_s_wrong][next_w][sk] += count;
                    } 
                    // 如果 next_w == 3，直接淘汰，方案数就此消失，不需要操作

                    // --- 决策3：放弃 ---
                    if (sk < 3) {
                        // 分数不变，连错数 w 也不变（重点！）
                        dp[i+1][s][w][sk+1] += count;
                    }
                }
            }
        }
    }

    // 处理那些答完了18题，且分数没到120，也没被淘汰的情况
    // 它们停留在 dp[19][...][...][...] 中
    for (int s = 0; s < 150; ++s) {
        for (int w = 0; w < 3; ++w) {
            for (int sk = 0; sk <= 3; ++sk) {
                final_ans[s] += dp[19][s][w][sk];
            }
        }
    }

    // 处理输入
    int n;
    if (cin >> n) {
        vector<int> queries(n);
        for (int i = 0; i < n; ++i) {
            cin >> queries[i];
        }

        for (int i = 0; i < n; ++i) {
            // 如果查询的分数根本到达不了（比如130，或者其他奇葩分数），输出0
            if (queries[i] >= 200 || queries[i] < 0) cout << 0;
            else cout << final_ans[queries[i]];
            
            if (i != n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}