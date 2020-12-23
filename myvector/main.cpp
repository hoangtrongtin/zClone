#include <iostream>
#include <vector>
using namespace std;

/*int simple_vector()
{
    int n;
    vector<float> a;
    cout <<"Enter array size: ";
    cin >> n;
    if(n<1){
        cout<<"Invalid size!"<<endl;
        return 1;
    }
    a.resize(n);
    for(int i = 0; i <n; i++)
    {
        cout << "a[" <<i<< "] = ";
        cin>>a[i];
    }
    cout <<"Data: ";
    for (float f:a){
        cout <<f<<" ";
    }
    cout <<endl;
    return 0;
}*/
istream& operator >> (istream& iDev, vector<float> &a){
    float temp;
    a.resize(0);
    while(iDev >>temp){//neu kieu du lieu nhap vao la float(kieu du lieu cua temp)
        a.push_back(temp);
    }
    return iDev;
}
ostream& operator <<(ostream& oDev, vector<float> &a){
    for(float f: a){
        oDev << f <<" ";
    }
    return oDev;
}
int main(){
    vector<float> a;
    cout << "Input: ";
    cin >>a;
    cout << "Output: ";
    cout <<a;

    return 0;
}