#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
 unordered_map<int ,int> m;
    int k= n/2;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    
   for(int i=0;i<n;i++)
       if(m[arr[i]] > k)
           return arr[i];
    return -1;
    
}