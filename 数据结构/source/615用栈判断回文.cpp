#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isback(string str){
    stack<char> stk; string str_back;
    for(int i=0;i<str.length();i++)
        stk.push(str[i]);
    for(int i=str.length()-1;i>-1;i--)
        str_back=str_back+str[i];
    if(str==str_back)
        return true;
    else
        return false;    
}

int main(){
    string str; cin>>str;
    isback(str)?cout<<"yes":cout<<"no";
    return 0;
}