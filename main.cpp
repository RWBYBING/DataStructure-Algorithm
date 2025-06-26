#include <iostream>
#include <string>
#include <vector>

#include <dynamic_array.h>
#include <bubble_sort.h>
#include <selection_sort.h>

static void printVector(const std::vector<int>& vec)
{
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main(int, char**)
{
    std::cout << "Choose the specific vector and algorithm" << std::endl;
    std::cout << "[0] Dynamic Array" << std::endl;
    std::cout << "[20] Bubble Sort" << std::endl;
    std::cout << "[21] Selection Sort" << std::endl;

    int index;
    std::cin >> index;

    // Dynamic Array
    if (index == 0)
    {
        std::cout << "Init a dynamic array" << std::endl;
        DynamicArray d_array;
        std::cout << "The Size of the array is: " << d_array.GetSize() << std::endl;
        std::cout << "The Capacity of the array is: " << d_array.GetCapacity() << std::endl;
        std::cout << std::endl;

        std::cout << "resize the capacity of the array to 2" << std::endl;
        d_array.Resize(2);
        std::cout << "The Size of the array is: " << d_array.GetSize() << std::endl;
        std::cout << "The Capacity of the array is: " << d_array.GetCapacity() << std::endl;
        std::cout << "Print all the element: ";
        d_array.PrintAll();
        std::cout << std::endl;

        std::cout << "reserve the capacity of the array to 4" << std::endl;
        d_array.Reserve(4);
        std::cout << "The Size of the array is: " << d_array.GetSize() << std::endl;
        std::cout << "The Capacity of the array is: " << d_array.GetCapacity() << std::endl;
        std::cout << "Print all the element: ";
        d_array.PrintAll();
        std::cout << std::endl;

        std::cout << "push back 10" << std::endl;
        d_array.push_back(10);
        std::cout << "The Size of the array is: " << d_array.GetSize() << std::endl;
        std::cout << "The Capacity of the array is: " << d_array.GetCapacity() << std::endl;
        std::cout << "Print all the element: ";
        d_array.PrintAll();
        std::cout << std::endl;

        std::cout << "push back 20" << std::endl;
        d_array.push_back(20);
        std::cout << "The Size of the array is: " << d_array.GetSize() << std::endl;
        std::cout << "The Capacity of the array is: " << d_array.GetCapacity() << std::endl;
        std::cout << "Print all the element: ";
        d_array.PrintAll();
        std::cout << std::endl;

        std::cout << "push back 30" << std::endl;
        d_array.push_back(30);
        std::cout << "The Size of the array is: " << d_array.GetSize() << std::endl;
        std::cout << "The Capacity of the array is: " << d_array.GetCapacity() << std::endl;
        std::cout << "Print all the element: ";
        d_array.PrintAll();
        std::cout << std::endl;

        std::cout << "pop back" << std::endl;
        d_array.pop_back();
        std::cout << "The Size of the array is: " << d_array.GetSize() << std::endl;
        std::cout << "The Capacity of the array is: " << d_array.GetCapacity() << std::endl;
        std::cout << "Print all the element: ";
        d_array.PrintAll();
        std::cout << std::endl;
    }

    // Bubble Sort
    if (index == 20)
    {
        std::vector<int> vec = {5, 2, 9, 1, 3};
        BubbleSort(vec);
        printVector(vec);
    }

    // Selection Sort
    if (index == 21)
    {
        std::vector<int> vec = {5, 2, 9, 1, 3};
        SelectionSort(vec);
        printVector(vec);
    }
}