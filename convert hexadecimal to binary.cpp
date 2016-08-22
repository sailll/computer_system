#include <cstdio>
#include <string>
#include <iostream>
#include <map>
#include <bitset>
using namespace std;
int main(){
    string s="0x39A7F8";
    int in=0;
    bitset<4> a(in);
    map<char,bitset<4>> dict;
    for(int i=0;i<10;++i){
        char p='0';
        dict[p+i]=a;
        ++in;
        a=bitset<4>(in);
    }
    char c='A';
    for(int i=10;i<16;++i){
        dict[c]=a;
        ++c;
        ++in;
        a=bitset<4>(in);
    }
    string ans;
    for(int i=2;i<s.length();++i){
        cout<<dict[s[i]];
    }
    cout<<char(10);
    return 0;
}