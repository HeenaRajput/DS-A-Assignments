#include<bits/stdc++.h>
using namespace std;

 bool valid(char c){
        if((c>='a' && c<='z') || (c>='A'&& c<='Z') || (c>='0' && c<='9'))
            return true;
        else
            return false;
    }
    bool isPalindrome(string s) {

        int i=0;
        int j=s.size()-1;

        transform(s.begin(),s.end(),s.begin(),::tolower);
        while(i<j){
            int x=valid(s[i]);
            int y=valid(s[j]);
            if(x && y)
            {
                if(s[i]!=s[j])
                    return false;
                i++;j--;
            }

            if(!y)
            j--;

            if(!x)
            i++;
        }

        return true;
    }

    int main(){
    bool b=isPalindrome("A man, a plan, a canal: Panama");
    cout<<b<<endl;
    return 0;

    }
