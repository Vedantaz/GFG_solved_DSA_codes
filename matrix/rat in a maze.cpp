
void help(vector<vector<int>> &mat, int i, int j, int n, vector<int> &res, string val){
    if(i==n || j==n || i<0 || j<0 || mat[i][j] ==0) return;
    if(i==n-1 && j==n-1) {
        res.push_back(val);
        return;
    }
    mat[i][j]=0;
    help(mat, i-1, j, n, res,val+ 'U');
    help(mat, i+1, j, n, res,val+ 'D');
    help(mat, i, j-1, n, res,val+ 'L');
    help(mat, i, j+1, n, res,val+ 'R');
    mat[i][j]=1;
    return;


}
vector<string> findPath(vector<vector<int>> &mat){
    int n = mat.size();
    vector<string> res;

    if(mat[n-1][n-1] ==0)return res;
    if(mat[0][0] ==1){

        help(mat, 0,0,n,res,"");
        return res;
    }

}