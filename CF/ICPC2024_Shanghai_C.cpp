#include<iostream>
using namespace std;
int main()
{
    int T,l,r;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> l >> r;
        bool j = false;
        if(r%2){
            j = true;
        }
        else{
            if(2*l+2<=r){
                j = true;
            }    
        }
        switch (l%2)
        {
        case 1:
            if(j){
                cout << "Alice" << endl;
            }
            else{
                cout << "Bob" << endl;
            }
            break;
        case 0:
            if(j){
                cout << "Bob" << endl;
            }
            else{
                cout << "Alice" << endl;
            }
        default:
            break;
        }
    }
    return 0;
    
}
/*想法和标答基本一致
  但是算法不够简单
  没有由“倍数”联想到“质数”
  
  
  分类可以更精简
  
  while(T--)*/