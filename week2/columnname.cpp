#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {

        string str="";
        while(columnNumber>0){
            char c='A'+(columnNumber-1)%26;
            str=c+str;
            columnNumber=(columnNumber-1)/26;
        }

        return str;
    }

    int main(){
    string s= convertToTitle(27);
    cout<<s<<endl;
    }
