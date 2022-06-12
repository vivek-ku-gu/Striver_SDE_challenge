#include<bits/stdc++.h>
using namespace std;
void merge(int left,int right,int arr[],int temp[],int mid)
{
 int i=left;
 int j= mid+1;
 int k = left;
 while((i<=mid) && (j<=right))
 {
     if(arr[i]< arr[j])
      temp[k++]= arr[i++];
     else
      temp[k++]= arr[j++];
 }
 while(i<=mid)
 temp[k++]= arr[i++];
  while(j<=right)
 temp[k++]= arr[j++];
  
  for(int i=left;i<=right;i++)
  arr[i]=temp[i];
}
void mergesort(int left,int right,int arr[],int temp[])
{

 if(right>left)
 {
      int mid = (right+left)/2;
     mergesort(left,mid,arr,temp);
     mergesort(mid+1,right,arr,temp);
     merge(left,right,arr,temp,mid);
 }
}
int main()
{
int arr[]={2,4,1,6,3,8};
int n = sizeof(arr)/sizeof(arr[0]);
int left = 0;
int right = n-1;
int temp[n];
for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
mergesort(left,right,arr,temp);

for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
}