class MinStack {
    private:
        static const int cap = 1000;
        int data[cap];
        int minData[cap];
        int topIndex;
public:
    MinStack() {
        topIndex = 0;
    }
    
    void push(int val) {
        if(topIndex >= cap){
            return; // Overflow
        }

        data[topIndex] = val;

        // If stack is empty the min value is the first val being pushed
        if (topIndex == 0) {
            minData[topIndex] = val;
        } 
        // If stack isn't empty compare the val with the 
        else {
            minData[topIndex] = std::min(val, minData[topIndex - 1]);
        }
        topIndex++;
    }
    
    void pop() {
        if (topIndex == 0){
            return;
        }

        topIndex--;
    }
    
    int top() {
        if(topIndex == 0)
            return -1;
        else
            return data[topIndex - 1];
    }
    
    int getMin() {
        if(topIndex == 0)
            return -1;
        else
            return minData[topIndex - 1];
    }
};
