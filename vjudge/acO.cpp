#include<bits/stdc++.h>
using namespace std;
string ctst;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> ctst;
        int len = ctst.length(),n = 0,pos1[200000] = {0},pos2[200000] = {0};
        do
        {
            pos1[200005] = {0},pos2[200005] = {0};
            n = 0;
            for (int j = 0; j < len-2; j++)
            {
                if(ctst[j ] == 'F' && ctst[j+1] == 'F' && ctst[j+2] == 'T'){
                    pos1[n] = j+1;
                    n++;
                }
                if(ctst[j] == 'N' && ctst[j+1] == 'T' && ctst[j+2] == 'T'){
                    pos2[n] = j+1;
                    n++;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if(pos1[j] != 0){
                    ctst[pos1[j]] = 'T';
                    ctst[pos1[j+1]] = 'F';
                }
                else if(pos2[j] != 0){
                    ctst[pos2[j]] = 'N';
                    ctst[pos2[j]-1] = 'T';
                }
                else break;
            }
            
        } while (n != 0);
        
        cout << ctst << endl;
        
    }
    
}