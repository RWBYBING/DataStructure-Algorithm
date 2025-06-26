#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>
#include <algorithm>

// Best: O(n)
// Average: O(n^2)
// Worst: O(n^2)
static void BubbleSort(std::vector<int>& vec)
{
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        bool swapped = false;                                   // if swapped
        for (size_t j = 0; j < vec.size() - 1 - i; ++j)
        {
            if (vec[j] > vec[j + 1])                            
            {
                std::swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

#endif // BUBBLE_SORT_H
