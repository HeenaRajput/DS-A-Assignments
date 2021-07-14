class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int i,j,n=s.size();
        vector<int>vt,vt2;
        for(i=0;i<n;i++){
            if(s[i]==c)
                vt.push_back(i);
        }

        int result[n],minm;
        for(i=0;i<n;i++){
            if(s[i]==c){
                result[i]=0;
            }
            else{
                int x=vt.size();
                int dist[x];
                for(j=0;j<vt.size();j++){
                    dist[j]=abs(vt[j]-i);
                }
                    minm=dist[0];
                    for(int k=1;k<x;k++){
                        if(dist[k]<minm)
                            minm=dist[k];
                    }
                result[i]=minm;
                }
            }
        for(i=0;i<n;i++)
            vt2.push_back(result[i]);


        return vt2;

        }

};
