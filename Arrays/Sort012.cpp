#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int zero=0,one=0,two=0;
   for(auto i=0;i<n;i++){
      if(arr[i]==0){
         zero++;
      }else if(arr[i]==1){
         one++;
      }else{
         two++;
      }
   }
   int i=0;
   while(i<n){
      if(zero>0){
         arr[i]=0;
         zero--;
      }else if(one>0){
         arr[i]=1;
         one--;
      }else if(two>0){
         arr[i]=2;
         two--;
      }
     i++;
   }
   
}
