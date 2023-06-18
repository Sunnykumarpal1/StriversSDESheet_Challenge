#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
   
//    intution is that we convert our row to column and then 
      int rowstart=0,rowend=n-1,colstart=0,colend=m-1;
      while(rowstart<rowend&& colstart<colend){
          int temp=0, indi=0,indj=0;
          for(auto i=colstart;i<=colend;i++){
              if(i==colstart){
                  indi=rowstart;
                  indj=i;
                  temp=mat[indi][indj];
                  continue;
              }
              int val=temp;
              temp= mat[rowstart][i];
              mat[rowstart][i]=val;
          }
          rowstart++;
          for(int i=rowstart;i<=rowend;i++){
             
               int val=temp;
               temp= mat[i][colend];
              mat[i][colend]=val;
          }
          colend--;
          
              for(auto i=colend;i>=colstart;i--){
                  
                   int val=temp;
                   temp=mat[rowend][i];
                   mat[rowend][i]=val;
              }
          rowend--;
          
  
              for(auto i=rowend;i>=rowstart;i--){
              
                   int val=temp;
                   temp= mat[i][colstart];
                  mat[i][colstart]=val;
              }
          colstart++;
     
          mat[indi][indj]=temp;

      }
    
}
