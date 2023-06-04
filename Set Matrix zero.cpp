Better Solution:
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
