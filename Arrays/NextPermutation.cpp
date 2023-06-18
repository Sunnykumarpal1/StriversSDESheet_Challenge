// Better Solution:
int rowcnt=matrix.size();
	int colcnt=matrix[0].size();
	vector<int>row(rowcnt,0);
	vector<int>col(colcnt,0);
	for(auto i=0;i<rowcnt;i++){
		for(auto j=0;j<colcnt;j++){
			if(matrix[i][j]==0){
				row[i]=-1;
				col[j]=-1;
			}
		}
	}
	 for(auto i=0;i<rowcnt;i++){
		 for(auto j=0;j<colcnt;j++){
			 if(row[i]==-1||col[j]==-1){
				 matrix[i][j]=0;
			 }
		 }
	 }
TC:- O(2*(M*N))
SC:- O(M+N) since we are using 2 extra arrays 
// Optimal solution
void setZeros(vector<vector<int>> &matrix)
{
    int col0=1;
    int m=matrix.size();
    int n=matrix[0].size();
// here we will marking in which row and column zero have appeared
    for(auto i=0;i<m;i++){
        for(auto j=0;j<n;j++){
            if(matrix[i][j]==0){
                if(j==0){
                    col0=0;
                }else{
                    matrix[0][j]=0;
                }
                    matrix[i][0]=0;
            }
        }
    }
    // we will mark zero if either row or column are zero
    for(auto i=m-1;i>=1;i--){
        for(auto j=n-1;j>=1;j--){
           if( matrix[i][0]==0||matrix[0][j]==0){
               matrix[i][j]=0;
           }
        }
    }
    // here column values are dependent on zeroth row
    if(matrix[0][0]==0){
        for(auto j=0;j<n;j++){
            matrix[0][j]=0;
        }
    }
    // and rowvalue are dependent on col0
    if(col0==0){
       for (auto i = 0; i < m; i++) {
        matrix[i][0] = 0;
      }
    }

}
TC:- O(2*(M*N))
SC:- O(1) 
