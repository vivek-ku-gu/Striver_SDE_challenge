#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int right =n*m-1;
    int left =0 ;
    while(right>=left){
         int mid = (right+left)/2;
        if(target==mat[mid/n][mid%n])
            return true;
        else if(target>mat[mid/n][mid%n])
        
        left = mid+1;
        else
            right = mid-1;
    }
    return false;          
}