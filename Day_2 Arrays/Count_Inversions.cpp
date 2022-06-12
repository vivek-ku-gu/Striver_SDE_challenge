int merge(long long *arr,long long *temp,int left,int right,int mid)  
{
 int inv_pairs=0;
 int i = left;
 int j= mid;
 int k=left;
    while((i<mid) && (j<=right))
    {
        if(arr[i]<arr[j])
          temp[k++]=arr[i++];
        else
        {
          temp[k++]=arr[j++];
          inv_pairs = inv_pairs + (mid-i);
        }
    }
  
        while(i<mid)
            temp[k++]=arr[i++];
           while(j<=right)
             temp[k++]=arr[j++];
    for(int i=left;i<=right;i++)
        arr[i] =temp[i];
    return inv_pairs;
}
int mergesort(long long *arr,long long *temp,int left,int right)
    {
    int inv_pairs=0;
    
      if(right>left)
      {
         int mid = (left+right)/2;
         inv_pairs += mergesort(arr,temp,left,mid);
         inv_pairs += mergesort(arr,temp,mid+1,right);
         inv_pairs += merge(arr,temp,left,right,mid+1);
      }
    return inv_pairs;
    }
long long getInversions(long long *arr, int n){
    // Write your code here
 int left=0;
    int right = n-1;
    
 long long temp [n];
    return mergesort(arr,temp,left,right);
}