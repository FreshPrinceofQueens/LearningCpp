#include <iostream>
#include <array>

class Stack {
private:
    std::array<int, 10> stack {0};
    int stackCount;

public:
    void reset() {
        stackCount = 0;
    }
    bool push(int n) {
        if(stackCount == 10)
            return false;

        stack[stackCount++] = n;
        return true;
    }
    int pop() {
        assert((stackCount > 0) && "Stack is full!");
        return stack[stackCount--];
    }
    void print() {
        for(int n = 0; n < stackCount; ++n) {
            std::cout << stack[n] << " ";
        }
        std::cout << std::endl;
    }
};
int main() {
    Stack stack;
    stack.reset();

    stack.print();

    stack.push(5);
    stack.push(3);
    stack.push(8);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();

    stack.print();
    return 0;
}
