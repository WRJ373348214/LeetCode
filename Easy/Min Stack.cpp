/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
*/
/*
    ��Ҫ�ܵõ���ǰջ����С����
    ��һ��ջ�����浱ǰ��С������������ÿ������Ҫpush
    ���ǵ�xС�ڵ�ǰminջ������ʱ��push
    Ϊʲô������
    ���x>min_stack.top(),���е������ᱻpush����һ���������е�����ջ��
    x�Ǻ����Ŀ϶���min_stack.top()����������棬x�϶����ȱ�push��ȥ��
    ������ô�����ֲ���x�����������С����
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
