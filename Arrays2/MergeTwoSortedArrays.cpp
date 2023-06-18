#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
   int i=m-1,j=n-1;
    int ind=m+n-1;
	while(ind>=0&&i>=0&&j>=0){
		if(arr1[i]>arr2[j]){
			arr1[ind]=arr1[i];
			i--;
		}else{
			arr1[ind]=arr2[j];
			j--;
		}
		ind--;
	}
	while(i>=0){
		arr1[ind--]=arr1[i--];
	}
	while(j>=0){
		arr1[ind--]=arr2[j--];
	}
	return arr1;
}
