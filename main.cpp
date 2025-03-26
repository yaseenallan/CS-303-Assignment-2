//Yaseen Allan
//CS-303 Assignment 2
//03/18/2025
//This program demonstrates a single linked list and a stack. The Single Linked List class uses a Node structure for adding, removing, and accessing elements from both ends, inserting or removing at specific indices, and checking if the list is empty. The Integer Stack class uses a std::vector<int> to manage elements, supporting push, pop, top, average calculation, and size retrieval. The main program showcases these operations by performing tasks like adding, removing, and retrieving elements from both structures.


#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

void demonstrate_linked_list() {
    std::cout << "Demonstrating Single Linked List:\n";
    Single_Linked_List<int> list;

    // Add elements at the front and back of the list
    list.push_front(5);
    list.push_back(25);
    list.push_front(10);

    std::cout << "Front: " << list.front() << std::endl;
    std::cout << "Back: " << list.back() << std::endl;

    // Insert an element at a specific position
    list.insert(2, 30);

    // Search for an element's position
    std::cout << "Position of 30: " << list.find(30) << std::endl;

    // Remove an element from the list
    list.remove(1);
}

void demonstrate_stack() {
    std::cout << "\nDemonstrating Integer Stack:\n";
    IntegerStack stack;

    // Check if the stack is currently empty
    std::cout << "Is stack empty? " << (stack.is_empty() ? "Yes" : "No") << std::endl;

    // Push elements onto the stack
    stack.push(5);
    stack.push(25);
    stack.push(30);

    // Display the size and top element of the stack
    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;

    // Calculate and display the average of the stack elements
    std::cout << "Average: " << stack.get_average() << std::endl;

    // Pop an element from the stack and display the new top
    stack.pop();
    std::cout << "After pop, top is now: " << stack.top() << std::endl;
}

int main() {
    demonstrate_linked_list();
    demonstrate_stack();
    return 0;
}
