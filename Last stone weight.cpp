class Solution {
    public:
        int lastStoneWeight(vector<int>& stones) {
            int n = stones.size();
          priority_queue<int>pq;
          for(int i=0;i<n;i++){
              pq.push(stones[i]);
          }
          while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(y<x) pq.push(x-y);
          }
         return pq.empty() ?0:pq.top();
    
        }
    };