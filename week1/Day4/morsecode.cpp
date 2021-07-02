

  #include<bits/stdc++.h>
 using namespace std;

 int uniques(vector<string>& words) {
        set<string>s;
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        int n=words.size();
        for(int i=0;i<n;i++){
           string str="";
            int m=words[i].size();
            for(int j=0;j<m;j++){
                char c=words[i][j];
                str+=arr[c-'a'];
            }

            s.insert(str);
        }

        int r=s.size();
        return r;
    }

    int main(){
    vector<string> v;
    int n;
    string vt;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>vt;
    v.push_back(vt);
    }


   int v2=uniques(v);

    cout<<v2<<" ";

    return 0;
    }
