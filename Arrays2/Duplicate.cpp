#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	 int fast=arr[0],slow=arr[0];
     do{
        slow=arr[slow];
        fast=arr[arr[fast]];
     }while(slow!=fast);
     fast=arr[0];
     while(slow!=fast){
         fast=arr[fast];
         slow=arr[slow];
     }
     return fast;
    
 
}
