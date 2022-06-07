#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
//      int gap;
//   if((m+n)%2 )
//     gap =  (m+n+1)/2;
//    else
//        gap =  (m+n)/2;
    
//     while(gap)
//     {
//         int i=0;
//         int j=i+gap;
//         while(j< (n+m)){ 
//              if(j<n && arr1[i]>arr1[j])
//                  swap(arr1[i],arr1[j]);
//             else if(j>n && arr1[i]>arr2[j-n])
//                        swap(arr1[i],arr2[j-n]);
//             else if(i>n && arr2[i]>arr2[j-n])
//                   swap(arr2[i],arr2[j-n]);
//             i++;
//             j++;
            
//         }
//         if(gap ==1)
//             gap=0;
//         else
//             gap = ceil((floor)gap/2);
//     }
    vector<int> ans;
    for(int i=0;i<m;i++)
    ans.push_back(arr1[i]);
     for(int i=0;i<n;i++)
      ans.push_back(arr2[i]);
    sort(ans.begin(),ans.end());
    return ans;
} 