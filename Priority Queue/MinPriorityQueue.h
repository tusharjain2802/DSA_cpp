#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();
        int lchild=1, rchild=2,minIndex, parentIndex=0, temp;
        int n=pq.size() -1;
        while(lchild<=n || rchild <=n){
          if (pq[parentIndex] > pq[lchild] || pq[parentIndex] > pq[rchild]) {
            if (pq[lchild] < pq[rchild]){
                temp=pq[lchild];
                pq[lchild] = pq[parentIndex];
                pq[parentIndex] = temp;
                parentIndex=lchild;
              }
              else{
                temp = pq[rchild];
                pq[rchild] = pq[parentIndex];
                pq[parentIndex] = temp;
                parentIndex = rchild;
              }
              lchild = (parentIndex*2)+1;
              rchild = (parentIndex*2)+2;
          } else {
            break;
          }
        }
        return ans;
    }
};