#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1("hello ");
    string str2 = "world!";    //string str2.=("---");
    string s;
    s = str1 + str2;    //s = str1.+(str2;)
    cout<<"The string "<<s<<endl;
    cout <<"Leng of string = "<< s.length() <<endl;
    cout <<"First character: "<< s[0]<<endl;
    int lastPos = s.length()-1;
    cout <<"Last character: "<<s[lastPos]<<endl;
    return 0;
}