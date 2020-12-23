#include "MyIntArray.h"

MyIntArray::MyIntArray(int sz){
    size = sz;
    pArr = new int[sz];
    for(int i=0;i<sz;i++){
        pArr[i]= 0;
    }

}
void MyIntArray::Update(int i, int v){
    pArr[i] =v;
}
int MyIntArray::Get(int i){
    return pArr[i];
}
