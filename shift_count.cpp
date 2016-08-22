#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    for(unsigned int i=1;i<10;++i){
        cout<<(i<<31==i<<63)<<endl;
    }
    return 0;
}