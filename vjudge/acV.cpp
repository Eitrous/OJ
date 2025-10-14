#include<iostream>
using namespace std;
struct student
{
    int num,grade1,grade2;
    int sum(){
        return grade1+grade2;
    }
};

int judge(struct student stu)
{
    int g;
    g = stu.grade1*7+stu.grade2*3;
    if( g >= 800 && stu.sum() > 140) cout << "Excellent" << endl;
    else cout << "Not excellent" << endl;    
    return 0;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        student stu;
        cin >> stu.num >> stu.grade1 >> stu.grade2;
        judge(stu);
    }
    return 0;
}