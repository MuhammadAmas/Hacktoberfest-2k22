/* Sample Input and Output:
I: n = 4
O: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Reason: There are two distinct solutions to the 4-queens puzzle hence ans is 2
*/


class Solution {
    
public:
    bool isSafe(int row,int col,vector<string> board,int n){
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }
            if(board[i][col]=='Q'){
                return false;
            }
        }
        int i=row+1;
        int j=col+1;
        while(i<n && j<n){
            if(board[i][j]=='Q'){
                return false;
            }
            i++;
            j++;
        }
        i=row-1;
        j=col-1;
        while(i>=0 && j>=0){  
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }
        i=row+1;
        j=col-1;
        while(i<n && j>=0){  
            if(board[i][j]=='Q'){
                return false;
            }
            i++;
            j--;
        }
        i=row-1;
        j=col+1;
        while(i>=0 && j<n){  
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j++;
        }
        return true;
    }
    
    
    
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(i,col,board,n)){
                board[i][col]='Q';
                solve(col+1,board,ans,n);
                board[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};