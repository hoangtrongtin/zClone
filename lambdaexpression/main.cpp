#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void print_vector(vector<int>&A)
{
    for(int x: A){
        cout<< x  << " ";
    }
    cout <<endl;
}
int main()
{
    vector<int> A;
    A.resize(0);
    A.push_back(9100);
    A.push_back(3);
    A.push_back(337);
    A.push_back(350);
    A.push_back(-65);
    cout<<"hello"<<endl;

    auto B(A);

    print_vector(A);
    for(int i=0; i<A.size()-1; i++){
        for(int j=i+1; j<A.size(); j++){
            if (A[i]>A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    cout << "after sort: "<<endl;
    print_vector(A);
    cout<<"vector B after sort A: "<<endl;
    print_vector(B);

    sort(B.begin(), B.end());
    cout <<"vector B after acsending sort B: "<< endl;
    print_vector(B);
    sort(B.begin(), B.end(), greater<int>());
    cout <<"vector B after descending sort B: "<< endl;
    print_vector(B);
    sort(B.begin(), B.end(), [](int a, int b){return (abs(a) < abs(b));});
    cout <<"vector B after absolute ascending sort B: "<< endl;
    print_vector(B);
    //g++ main.cpp -o main.exe

    return 0;

}