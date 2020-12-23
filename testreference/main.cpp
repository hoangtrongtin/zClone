#include <iostream>
#include "MyClass.h"
#include "MyIntArray.h"
using namespace std;

int main(){
    /*MyClass i;
    i.Set(5);
    cout << "i= " << i.Get() <<endl;
    cout << "hello";
    return 0;*/

    MyIntArray A(10);
    A.Update(5,1);
    cout<<"A: "<<A.Get(5)<<endl;

    MyIntArray B(A);//A va B cung tro den 1 vung nho
    cout<<"B: "<<B.Get(5)<<endl;
    B.Update(5,2);

    cout<<"B after update: "<<B.Get(5)<<endl;
    cout<<"A after update: "<<A.Get(5)<<endl;

    return 0;

}