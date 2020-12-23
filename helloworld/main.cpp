#include<iostream>
using namespace std;
int main()
{
    int A[3];
    A[0] = 0;
    A[1]=1;
    A[2]=2;

    for (int i:A)
    {
        cout <<i<<endl;
    }
    cout <<"hello world!"<<endl;
    return 0;
}