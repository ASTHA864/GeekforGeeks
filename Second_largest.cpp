class Solution {
  public:
    
    int getSecondLargest(vector<int> &arr) {
      
    int n=arr.size();
    int first_largest=-1;
    int second_largest=-1;

    for (int i = 0; i < n; i++) {

        if(arr[i] > first_largest) {
            second_largest = first_largest;
            first_largest = arr[i];
        }
          else if(arr[i] < first_largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }
    return second_largest;
}
};