class Solution {
    public:
      // Function to return list containing first n fibonacci numbers.
      vector<int> fibonacciNumbers(int n) {
          // code here
      
          vector<int> fib(n);
          fib[0] = 0;
          if (n > 1) {
              fib[1] = 1;
              for (int i = 2; i < n; i++) {
                  fib[i] = fib[i - 1] + fib[i - 2];
              }
          }
          return fib;
      }
  };
    