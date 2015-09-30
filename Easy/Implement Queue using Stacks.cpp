class Queue {
public:
    stack<int> cache;
    stack<int> que;
    // Push element x to the back of queue.
    void push(int x) {
        cache.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        while(cache.size()){
            que.push(cache.top());
            cache.pop();
        }
        que.pop();
        while(que.size()){
            cache.push(que.top());
            que.pop();
        }
    }

    // Get the front element.
    int peek(void) {
        while(cache.size()){
            que.push(cache.top());
            cache.pop();
        }
        int t=que.top();
        while(que.size()){
            cache.push(que.top());
            que.pop();
        }
        return t;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return cache.empty();
    }
};
//有些步奏多余，优化后的:
void push(int x){
    inStack.push(x);
}
void pop(void){
    if(outStack.empty()){
        while(!inStack.empty()){
            outStack.push(inStack.top());
            inStack.pop();
        }
    }
    outStack.pop();
}

int peek(void){
    if(outStack.empty()){
        while(!inStack.empty()){
            outStack.push(inStack.top());
            inStack.pop();
        }
    }
    return outStack.top();
}

bool empty(void) {
    return inStack.empty() && outStack.empty();
   }
};
