#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<int> tempInterval = intervals[0];
    vector<vector<int>> merged;
   for(int i=1;i<intervals.size();i++)
   {
       if(tempInterval[1]>=intervals[i][0])
       { 
            tempInterval[1] = max(intervals[i][1],tempInterval[1]);
       }
       else{
           merged.push_back(tempInterval);
           tempInterval = intervals[i];
       }
       
   }
     merged.push_back(tempInterval);
    return merged;
}
