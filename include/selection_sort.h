#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <vector>
#include <algorithm>

// Best: O(n^2)
// Worst: O(n^2)
// Average: O(n^2)
static void SelectionSort(std::vector<int>& vec)
{
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        size_t min = i;
        // find the min value in the unsorted part
        for (size_t j = i + 1; j < vec.size(); ++j)
        {
            if (vec[j] < vec[min])
                min = j;
        }
        // swap the min
        if (min != i)
        {
            std::swap(vec[i], vec[min]);
        }
    }
}

#endif // SELECTION_SORT_H