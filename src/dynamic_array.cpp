#include <dynamic_array.h>

DynamicArray::DynamicArray()
    : DATA{new int[0]}
    , size{0}
    , capacity{0}
{

}

DynamicArray::~DynamicArray()
{
    delete[] DATA;
}

size_t DynamicArray::GetSize() const
{
    return size;
}

size_t DynamicArray::GetCapacity() const
{
    return capacity;
}

void DynamicArray::Reserve(int new_capacity)
{
    if (new_capacity > this->capacity)              // only if the new capacity is greater than the current one
    {
        int* new_data = new int[new_capacity];      // create a new array with the new capacity
        for (size_t i = 0; i < this->size; ++i)     // copy the old data
        {
            new_data[i] = DATA[i];
        }
        delete[] DATA;                     
        DATA = new_data;
        this->capacity = new_capacity;
    }
}

void DynamicArray::Resize(int new_size)
{
    if (new_size > this->capacity)              // need to increase the capacity
    {
        this->Reserve(new_size);
    }
    if (new_size > this->size)
    {
        for (size_t i = size; i < new_size; ++i) {
            DATA[i] = 0;
        }
    }
    this->size = new_size;
}

void DynamicArray::PrintAll() const
{
    for (size_t i = 0; i < this->size; ++i)
    {
        std::cout << DATA[i] << " ";
    }
}

void DynamicArray::push_back(int element)
{
    if (this->size >= this->capacity)           // need to increase the capacity
    {
        size_t new_capacity = (capacity == 0) ? 1 : capacity * 2;
        this->Reserve(new_capacity);
    }
    DATA[size++] = element;
}

void DynamicArray::pop_back()
{
    if (size == 0) {
        throw std::out_of_range("Array is empty!");
    }
    --size; // just reduce the size is okay
}