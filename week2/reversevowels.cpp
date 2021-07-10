#include<bits/stdc++.h>
using namespace std;

 bool isvowel(char a){
        if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
            return 1;
        else
            return 0;
    }
    string reverseVowels(string s) {
         int i=0,j=(s.size()-1);
        while(i<=j){
            int x=isvowel(s[i]);
            int y=isvowel(s[j]);
            if(x && y)
            {
                char temp;
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }

             if(!y)
                j--;

             if(!x)
                i++;

        }

        return s;
    }

    int main(){
    string res=reverseVowels("hello");
    cout<<res<<endl;
    return 0;
    }
