
#include<bits/stdc++.h>
 using namespace std;

 int numRookCaptures(vector<vector<char>>& board) {

        if(board.empty())
            return 0;

        int n=board.size(),m=board[0].size(),count=0,r,c,flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='R')
                {
                    r=i;
                    c=j;
                    break;
                    flag=1;
                }
            }
            if(flag==1)
                break;

        }

        for(int i=r-1;i>=0;i--)
        {
            if(board[i][c]=='p')
            {
                count++;
                break;
            }

            if(board[i][c]=='B')
                break;
        }

        for(int j=c-1;j>=0;j--)
        {
            if(board[r][j]=='p')
            {
                count++;
                break;
            }

            if(board[r][j]=='B')
                break;
        }

        for(int j=c+1;j<m;j++)
        {
            if(board[r][j]=='p')
            {
                count++;
                break;
            }

            if(board[r][j]=='B')
                break;
        }

        for(int i=r+1;i<n;i++)
        {
            if(board[i][c]=='p')
            {
                count++;
                break;
            }

            if(board[i][c]=='B')
                break;
        }

        return count;

    }

    int main(){
    vector<vector<char>> v;
    int n,m;
    char vt;
    cin>>n;
    cin>>m;

    for(int i=0;i<n;i++){
    vector<char>temp;
    for(int j=0;j<m;j++){
     cin>>vt;
    temp.push_back(vt);
    }
    v.push_back(temp);
    }


     int v2=numRookCaptures(v);

    cout<<v2<<endl;

    return 0;
    }
