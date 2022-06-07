class Solution {
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b=temp;
    }
    void reverse(vector<int> &v){
        int a = 0;
        int b=v.size()-1;
        while(a<b)
        {
            swap(v[a],v[b]);
            a++;
            b--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++)
        {
              for(int j=i;j<n;j++)
              {
                  swap(matrix[i][j],matrix[j][i]);
              }
        }
           for(int i=0;i<n;i++)
        {
             reverse(matrix[i]);
        }
        
    }
};