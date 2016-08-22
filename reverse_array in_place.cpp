#include <iostream>
using namespace std;
int a[5]={1,2,3,4,5};
void inplace_exch(int &x,int &y){
    x=x^y;
    y=y^x;
    x=x^y;
}
int main(){
    const int len=sizeof(a)/sizeof(int);
    int begin,end;
    for(begin=0,end=len-1;begin<end;++begin,--end){
        inplace_exch(a[begin],a[end]);
    }
    for(int i=0;i<len;++i){
        cout<<a[i]<<" ";
    }
    cout<<char(10);
    return 0;
}