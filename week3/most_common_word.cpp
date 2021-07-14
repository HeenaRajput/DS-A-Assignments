class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        int i,j,n=paragraph.size();
        for(i=0;i<n;i++){
            paragraph[i]=tolower(paragraph[i]);
        }

        for(i=0;i<n;i++){
            paragraph[i]=(paragraph[i]>='a' && paragraph[i]<='z')?paragraph[i]:' ';
        }

        stringstream str(paragraph);
        unordered_set<string> str2;
        for(i=0;i<banned.size();i++){
           str2.insert(banned[i]);
        }
        unordered_map<string,int> res;
        string word="";
         while(str>>word){
             if(!str2.count(word))
                 res[word]++;
         }

        string temp="";
        int freq=INT_MIN;
        for(auto k:res){
            if(k.second>freq){
                temp=k.first;
                freq=k.second;
            }

        }
      return temp;
    }
};
