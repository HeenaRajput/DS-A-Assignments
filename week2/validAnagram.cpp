#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {

        int arr[26];
        int i;
        for(i=0;i<26;i++)
            arr[i]=0;

        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)
            return false;
        while(n1--){
            arr[s[n1]-'a']++;
        }

        while(n2--){
             arr[t[n2]-'a']--;

        }

        for(i=0;i<26;i++){
            if(arr[i]!=0)
                return false;
        }

        return true;

    }

    int main(){
    bool b=isAnagram("anagram","nagaram");
    cout<<b<<endl;
    return 0;

    }
