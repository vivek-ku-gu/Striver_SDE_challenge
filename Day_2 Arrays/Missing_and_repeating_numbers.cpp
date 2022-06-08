#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int> ans;
    vector<int> temp(n+1,0);
	for(int i=0;i<n;i++)
    {
        temp[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(temp[i]==0)
            ans.first = i;
        if(temp[i]==2)
            ans.second= i;
    }
    return ans;
}
