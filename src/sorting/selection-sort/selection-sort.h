/**
 * Selection Sort
 *
 * Complexity: O(N^2)
 * Space Complexity:In Place
 *
 * Description:
 *
 * Insertion sort loops through an array and finds the minimum and
 * maximum elements and swaps them if necessary. On the subsequent iterations
 * the loop skips the lowest elements i.e the already sorted array. So the size
 * which is looped through is reduced by 1 each time, (N-Iteration count elements
 * to loop through).
 *
*/

/***/
template<typename ForwardIterator>
void SelectionSortMin(ForwardIterator begin, ForwardIterator end)
{

    for(ForwardIterator key = begin; key != end; ++key)
    {
		ForwardIterator min_it = key;
		// Loop through to find min
		for(auto loop_it = key; loop_it != end; ++loop_it)
		{
			// Find if the loop it is less than current min
			if(*loop_it < *min_it)
			{
				// Update min
				min_it = loop_it;
			}
		}
		// If current value is not in right position
		if(key != min_it)
		{
			// Swap elements with the min
			std::swap(*key, *min_it);
		}
    }
}

/*
TODO: Implement Min Max Version
template<typename ForwardIterator>
void SelectionSortMinMax(ForwardIterator begin, ForwardIterator end)
{}
*/