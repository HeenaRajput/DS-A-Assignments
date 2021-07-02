 #include<bits/stdc++.h>
 using namespace std;

string restoreString(string s, vector<int>& indices) {
        string str="";

        int n=indices.size();
        char arr[n];

        for(int i=0;i<n;i++){
            arr[indices[i]]=s[i];

        }

        for(int i=0;i<n;i++)
            str+=arr[i];
        return str;
    }

    int main(){
    vector<int> v;
    int n,vt;
    string s,s1;
    cin>>s;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }

    s1=restoreString(s,v);

    cout<<s1;

    return 0;
    }

