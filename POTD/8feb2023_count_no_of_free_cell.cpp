

vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<int> row(n, 0);
      vector<int> col(n, 0);
      int row_count = 0;
      int col_count = 0;
      vector<long long int > res;
      
      for(int i=0;i<k;i++){
          
          int r = arr[i][0]-1;
          int c = arr[i][1]-1;
          if(row[r] == 0) {
              row[r]=1;
              row_count++;
              
              
          } 
          if(col[c] == 0) {
              col[c]=1;
              col_count++;
              
              
              
          }
          res.push_back(n*n - (row_count*n) - (col_count*n) + (row_count*col_count) );
      }
      return res;


it completes the task > given and get the total no of zeros present after each operation

vector<long long int> countZero()
{
    vector<vector<int>> res;
    int r_c = 0;
    int c_c = 0;
    vector<int> row(n, 0);
    vector<int> col(n, 0);

    for(int i=0; i<k;i++){
        int r = arr[i][0]-1;
        int c = arr[i][1]-1;
        if(row[r] == 0){
            row[r] = 1;
            r_c ++;
            
        }
        if(col[c] == 0){
            col[c] = 1;
            c_c ++;

        }
        res.push_back(n*n - (r_c*n) - (c_c*n) + (r_c*c_c));
    }
    return res;



}
    
