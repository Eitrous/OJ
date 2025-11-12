#include<bits/stdc++.h>
using namespace std;

char value[5] = "JQKA";
char type[5] = "HDCS";

struct Poker{
    char type = ' ';
    int value = 0;
    int typeno = -1;
    bool mstus = false;
}poker[8];


int main(){
    int n;cin >> n;
    int pos = 0,no;
    string str;
    while (n--){
        //输入
        getchar();
        pos = 0,no = 1;
        getline(cin,str);
        str += "   ";
        while (pos < str.length()){
            if(no <= 2) poker[no].mstus = true;
            poker[no].type = str[pos];
            for(int i = 0; i < 4; i++){
                if(poker[no].type == type[i]) poker[no].typeno = i;
                break;
            }
            pos++;
            if(str[pos] > '9'){
                for (int i = 0; i < 4; i++){
                    if(str[pos] == value[i]) {
                        poker[no].value = 11+i;
                        pos++;
                        break;
                    }
                }
            }
            else{
                poker[no].value = str[pos]-'0';
                pos++;
                if(str[pos] != ' '){
                    poker[no].value *= 10;
                    pos++;
                }
            }
            pos++;
            no++;
        }

        //处理
        int valuecnt[15][8] = {{0}},typcnt[5][8] = {{0}};
        char th_typ = poker[1].type;
        bool is_th = true,is_sz = false,is_ths = false;

        if(poker[2].type != th_typ) is_th = false;

        for (int i = 1; i <= 7; i++){
            valuecnt[poker[i].value][0]++;
            valuecnt[poker[i].value][valuecnt[poker[i].value][0]] = i;
            typcnt[poker[i].typeno][0]++;
            typcnt[poker[i].typeno][typcnt[poker[i].typeno][0]] = i;
        }

        for (int i = 1; i <= 3; i++){
            bool judge = true;
            for (int j = i; j <= i+3; j++){
                if(valuecnt[j][0] != valuecnt[j+1][0] - 1) judge = false;
            }
            if(judge){//当可能有sz时
                //判断有无必用牌
                bool is_mst = false;
                for (int j = i; j <= i+4; j++)
                {
                    if()
                }
                
                for (int j = i; j <= i+4; j++)
                {
                    
                }
                
            }
        }
        
        
        

    }
    return 0;
}