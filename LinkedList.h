#pragma once
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <cstddef>  // for size_t

template <typename Item_Type>
class Single_Linked_List {
private:
    // Node structure storing data and pointer to the next node
    struct Node {
        Item_Type data;
        Node* next;
        Node(const Item_Type& value) : data(value), next(nullptr) {}
    };

    Node* head;    // Points to the first node
    Node* tail;    // Points to the last node
    size_t num_items;  // Tracks the number of items in the list

public:
    // Constructor: Initializes an empty list
    Single_Linked_List();

    // Destructor: Frees all nodes in the list
    ~Single_Linked_List();

    // Adds an item to the front of the list
    void push_front(const Item_Type& item);

    // Adds an item to the back of the list
    void push_back(const Item_Type& item);

    // Removes the item from the front of the list
    void pop_front();

    // Removes the item from the back of the list
    void pop_back();

    // Returns the first item in the list
    Item_Type& front();

    // Returns the last item in the list
    Item_Type& back();

    // Checks if the list is empty
    bool empty() const;

    // Inserts an item at the specified index
    void insert(size_t index, const Item_Type& item);

    // Removes an item at the specified index
    bool remove(size_t index);

    // Finds the index of the first occurrence of an item
    size_t find(const Item_Type& item) const;

    // Returns the number of items in the list
    size_t size() const;
};

#endif
