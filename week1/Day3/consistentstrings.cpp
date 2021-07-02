 #include<bits/stdc++.h>
 using namespace std;

 int count(string a, vector<string>& w) {

        int i,j,k;
        int n1=a.size();
        int n2=w.size(),flag,count=0;
        string s;

        for(i=0;i<n2;i++){
            s=w[i];
            for(j=0;j<s.size();j++){
                flag=0;
                for(k=0;k<n1;k++){
                    if(s[j]==a[k]){
                       flag=1 ;
                        break;
                      }
            }
                if(flag==0)
                    break;
            }
            if(flag==1)
                count++;

        }

        return count;
    }

    int main(){
    vector<string> v;
    string s;
    int v3;
    int n;
    string vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }

    cin>>s;


    v3=count(s,v);

    cout<<v3<<" ";

    return 0;
    }
