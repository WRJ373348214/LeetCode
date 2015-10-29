/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
*/
/*
    还要能得到当前栈中最小的数
    多一个栈来保存当前最小的数，但不是每个数都要push
    而是当x小于当前min栈顶的数时才push
    为什么这样：
    如果x>min_stack.top(),所有的数都会被push到另一个保存所有的数的栈上
    x是后来的肯定在min_stack.top()这个数的上面，x肯定会先被push出去，
    无论怎么样都轮不到x这个数来当最小数！
                                                                        */
class MinStack {
public:
    stack<int> sta;
    stack<int> min_stack;
    void push(int x) {
        sta.push(x);
        if(min_stack.empty() || x<min_stack.top()){
            min_stack.push(x);
        }
    }

    void pop() {
        if(sta.empty()){
            if(min_stack.empty() && sta.top() == min_stack.top())
                min_stack.pop();
            sta.pop();
        }
    }

    int top() {
        if(!sta.empty())
            return sta.top();
    }

    int getMin() {
        if(!min_stack.empty())
            return min_stack.top();
    }
};
