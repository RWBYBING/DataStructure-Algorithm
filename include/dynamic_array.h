#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <iostream>
#include <stdexcept>

class DynamicArray
{
public:
    DynamicArray();
    ~DynamicArray();
    size_t GetSize() const;
    size_t GetCapacity() const;
    void Reserve(int new_capacity);
    void Resize(int new_size);
    void PrintAll() const;

    void push_back(int element);
    void pop_back();

private:
    int* DATA;                  // The actual pointer to the array
    size_t size;                // The current size of the array
    size_t capacity;            // The max size of the array
};

#endif // DYNAMIC_ARRAY_H