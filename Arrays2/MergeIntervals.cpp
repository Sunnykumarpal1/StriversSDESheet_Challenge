#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &in)
{
    int n=in.size();
    vector<vector<int>>ans;
    sort(in.begin(),in.end());
    auto inter=in[0];
    for(auto i=1;i<n;i++){
        if(inter[1]<in[i][0]){
            ans.push_back(inter);
            inter=in[i];
        }else{
            inter[1]=max(inter[1],in[i][1]);
        }
    }
    ans.push_back(inter);
    return ans;
  
}
