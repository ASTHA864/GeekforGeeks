class Solution {
    public:
      int missingNumber(vector<int>& arr) {
          // code here
         
         int n=arr.size()+1;
         int xor1=0, xor2=0;
         for(int i=0; i<n-1; i++)
         {
             xor2=xor2^arr[i];
            
  
         }
          for(int i=1; i<=n; i++)
          {
               xor1=xor1^i;
          }
          
             return xor1^xor2;
      }
  };
    