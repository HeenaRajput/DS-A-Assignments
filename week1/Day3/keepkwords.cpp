#include<bits/stdc++.h>
 using namespace std;


string keepk(string s, int k) {
       string ss="";
        int n=s.size(),c=0;

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                c++;

                if(c==k)
                    return ss;
                ss+=s[i];
            }
            else{
                ss+=s[i];
            }

        }
        return ss;
    }


    int main(){
    string s;
    string v3;
    int n;

    getline(cin,s);
    cin>>n;

    v3=keepk(s,n);

    cout<<v3<<" ";

    return 0;
    }
