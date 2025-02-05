
class Solution {
  public:
    int height(Node* node) {
     
        if(!node) return -1;
     
        return max(height(node ->left),height(node ->right)) + 1;
        
    }
};