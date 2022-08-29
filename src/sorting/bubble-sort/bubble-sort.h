/**
 * Bubble Sort:
 * 
 * Simple sorting algo, steps through the container comparing
 * adjacent elements and swaps if the order is incorrect.
 * Algo passes through the container until the list is sorted.
 *
 * Complexity: O(n^2)
 * Space Complexity:
*/

#include<stddef.h>
#include<iterator>
#include<functional>

/**
 *
 * @tparam ForwardIterator 
 * @param iterator indicating start of the sequence
 * @param iterator indicating end of the sequence
 * TODO: Switch to ranges, Use Concepts
*/
template<typename ForwardIterator>
void BubbleSort(ForwardIterator begin, ForwardIterator end)
{
	// Swap occurrence flag
    bool swap_flag = false;
	
    do
    {
		// Reset iterators
		auto previous_it = begin;
		auto it = (begin + 1);
		// Reset flag to false
		swap_flag = false;
		// Until the end of the container has been reached
		while(it != end)
		{
			// If previous value indicated by iterator is greater
			if((*it < *previous_it)) // Need < operator to be defined for the type
			{
				// Swap Elements
				std::swap(*it, *previous_it);
				// Set Flag
				swap_flag = true;
			}
			// Increment iterators
			++previous_it;
			++it;
		}
    }
    while(swap_flag);
}
