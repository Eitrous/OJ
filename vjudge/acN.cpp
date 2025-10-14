#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        char as[100000];
        cin >> as;
        long n = strlen(as),end = 0;
        int j = n-1,s[100000],stt = 0,k = 0;
        while (as[j] == '>')
        {
            end++;
            j--;
        }
        if(end < 3 || end == n || n < 5 || as[0] == '-'){
            cout << "No" << endl;
            continue;
        }
        while (n-stt-end)
        {
            if(as[stt] == '>'){
                s[k] = stt;
                k++;
            }
            stt++;
            
        }
        cout << "Yes " << k+end-3 << endl;
        for (int l = 0; l < k-1; l++)
        {
            cout << s[l]+1 << " " << n-s[l] << endl;
        }
        for (int l = 0; l < end-2; l++)
        {
            cout << s[k-1]+1 << " " << n-s[k-1]-l << endl;
        }  
    }
    return 0;

}