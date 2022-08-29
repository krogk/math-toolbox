/**
 * Insertion Sort
 *
 * Complexity: O(N^2)
 * Space Complexity: N
 *
 *
*/


/**
 * @brief 
 * 
 * @tparam BidirectionalIterator 
 * @param begin 
 * @param end 
 */
template<typename BidirectionalIterator>
void InsertionSort(BidirectionalIterator begin, BidirectionalIterator end)
{
    // Set key to the begin + 1
    //auto key = (begin + 1);
    // Loop trough the structure until the iterator reaches the end
    for(auto key = (begin + 1) ; key != end; ++key)
    {
        // Set current it
        auto it = key;
        // Set previous it
        auto previousIt = (key - 1);
        // Run Compare loop
        while( (*it < *previousIt) && ( begin <= previousIt ) )
        {
            // Swap elements
            std::swap(*previousIt,*it);
            // Decrement Iterator
            --previousIt;
            --it;
        }	
    }
}


/**
 * @brief 
 * 
 * @tparam Iterator 
 * @param begin 
 * @param end 
 */
template<typename Iterator>
void InsertionSortByRotation(Iterator begin, Iterator end)
{
    // Until the end of the container
    for (auto i = begin; i != end; ++i)
    {

        std::rotate(std::upper_bound(begin, i, *i), i, i + 1);
    }
}
