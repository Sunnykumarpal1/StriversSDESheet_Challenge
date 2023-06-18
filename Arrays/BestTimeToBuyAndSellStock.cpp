#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int mini=INT_MAX,maxi=INT_MIN;
    for(auto i=0;i<n;i++){
       mini=min(mini,prices[i]);
       maxi=max(maxi,prices[i]-mini);
    }
    return maxi;
}
