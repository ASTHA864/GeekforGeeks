class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(), arr.end());
        int s=0,count=0; 
        int e=arr.size()-1;
        while(s<=e)
        {
            if(arr[s]+arr[e]>=target)
            e--;
            else{
                count+=e-s;
                s++;
            }
        }
        return count;
    }
};