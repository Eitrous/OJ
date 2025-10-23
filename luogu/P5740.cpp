#include<bits/stdc++.h>

struct student
{
    int chin = 0,math = 0,eng = 0,sum = 0;
    void count()
    {
        sum = chin + math + eng;
    }
    std::string name;

}stu[1005];


int main()
{
    int n,i = 1;
    std::cin >> n;
    while (n--)
    {
    std::cin >> stu[i].name >> stu[i].chin >> stu[i].math >> stu[i].eng;
    stu[i].count();
    i++;
    }

    int maxgrade = -1,maxno = 0;
    for (int j = 1; j < i; j++)
    {
        if(stu[j].sum > maxgrade)
        {
            maxno = j;
            maxgrade = stu[j].sum;
        }
    
    }
    
    std::cout << stu[maxno].name << ' ' << stu[maxno].chin << ' ' << stu[maxno].math << ' ' << stu[maxno].eng;

    return 0;
}