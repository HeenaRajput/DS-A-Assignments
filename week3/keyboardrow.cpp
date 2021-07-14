class Solution {
public:
    vector<string> findWords(vector<string>& words) {
       string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        int i,j,n=words.size();
         vector<string> vt;
        for(i=0;i<n;i++)
        {
            int arr[26]={0};
            size_t f;
            for(j=0;j<words[i].size();j++){
                f=s1.find(tolower(words[i][j]));
                if(f!=string::npos)
                {
                    arr[tolower(words[i][j])-'a']=1;
                }
            }

            for(j=0;j<words[i].size();j++){
                f=s2.find(tolower(words[i][j]));
                if(f!=string::npos)
                {
                    arr[tolower(words[i][j])-'a']=2;
                }
            }

            for(j=0;j<words[i].size();j++){
                f=s3.find(tolower(words[i][j]));
                if(f!=string::npos)
                {
                    arr[tolower(words[i][j])-'a']=3;
                }
            }

            int temp=arr[tolower(words[i][0])-'a'];
            int flag=0;
            for(j=1;j<words[i].size();j++){
                if(temp!=arr[tolower(words[i][j])-'a']){
                    flag=1;
                break;
                }
            }
            if(flag==0)
                vt.push_back(words[i]);
        }
        return vt;
    }
};
