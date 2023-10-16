//1. Write a C++ program to print Floyd‟s triangle.
1
2 3
4 5 6
7 8 9 10

#include<iostream>
using namespace std;
int main()
{
    int i, j, num=1;
    for(i=0; i<5; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}