
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        
        unordered_map<int,int> mp;
        int preXor=0, count=0;
        for(int i=0; i<arr.size(); i++)
        {
            preXor^=arr[i];
            if(preXor==k)
            count++;
            if(mp.find(preXor^k)!=mp.end())
            count+=mp[preXor^k];
            mp[preXor]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends