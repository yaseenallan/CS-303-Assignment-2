#pragma once
#ifndef STACK_IMPLEMENTATION_H
#define STACK_IMPLEMENTATION_H

#include <vector>
#include <stdexcept>

class IntegerStack {
private:
    std::vector<int> stack_data;  // Stores the stack elements

public:
    // Returns true if the stack is empty
    bool is_empty() const;

    // Pushes an element onto the stack
    void push(int value);

    // Removes the top element from the stack
    void pop();

    // Returns the top element of the stack
    int top() const;

    // Returns the average of the stack elements
    double get_average() const;

    // Returns the current number of elements in the stack
    size_t size() const;
};

#endif
