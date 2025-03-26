#include "Stack.h"
#include <numeric>

// Check if the stack is empty
bool IntegerStack::is_empty() const {
    return stack_data.empty();
}

// Push an element onto the stack
void IntegerStack::push(int value) {
    stack_data.push_back(value);
}

// Pop an element from the stack
void IntegerStack::pop() {
    if (is_empty()) {
        throw std::runtime_error("Cannot pop from an empty stack");
    }
    stack_data.pop_back();  // Removes the top element
}

// Get the top element of the stack
int IntegerStack::top() const {
    if (is_empty()) {
        throw std::runtime_error("Stack is empty");
    }
    return stack_data.back();  // Returns the last element
}

// Calculate the average of the stack elements
double IntegerStack::get_average() const {
    if (is_empty()) {
        throw std::runtime_error("Cannot calculate average of an empty stack");
    }

    // Sum all elements and divide by the number of elements
    double sum = std::accumulate(stack_data.begin(), stack_data.end(), 0.0);
    return sum / stack_data.size();
}

// Get the current number of elements in the stack
size_t IntegerStack::size() const {
    return stack_data.size();
}
