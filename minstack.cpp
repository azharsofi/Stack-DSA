class MinStack {
public:
    stack<long long int> s; // Change the stack type to long long int
    long long int min;      // Change the min type to long long int

    MinStack() {
        this->min = INT_MAX;
    }

    void push(int x) {
        if (s.size() == 0) {
            s.push(x);
            min = x;
        } else {
            if (x >= min) {
                s.push(x);
            } else {
                s.push(1LL * 2 * x - min); // Use 1LL to indicate long long int
                min = x;
            }
        }
    }

    void pop() {
        if (s.size() == 0) {
            return;
        } else {
            if (s.top() >= min) {
                s.pop();
            } else {
                min = 1LL * 2 * min - s.top(); // Use 1LL to indicate long long int
                s.pop();
            }
        }
    }

    int top() {
        if (s.size() == 0)
            return -1;
        else {
            if (s.top() >= min)
                return s.top();
            else
                return min;
        }
    }

    int getMin() {
        if (s.size() == 0)
            return -1;
        return min;
    }
};
