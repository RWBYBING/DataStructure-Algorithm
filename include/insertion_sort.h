#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <vector>
#include <algorithm>

// Best: O(n^2)
// Worst: O(n^2)
// Average: O(n^2)
static void InsertionSort(std::vector<int>& vec)
{
    for (size_t i = 1; i < vec.size(); ++i)
    {
        int value = vec[i];                 // the element to be inserted
        for (size_t j = i - 1; j >= 0; --j)
        {
            if (vec[j] > value)             // move backward all the elements which is greater than value
            {
                vec[j + 1] = vec[j];
            }
            else
            {
                vec[j + 1] = value;
                break;
            }                           
        }
    }
}

#endif // INSERTION_SORT_H