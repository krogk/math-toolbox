#include <gtest/gtest.h>
#include "bubble-sort.h"
#include "insertion-sort.h"
#include "selection-sort.h"
#include <vector>

// Test Utils Functions //

template<typename T>
auto CheckElements(const std::vector<T>& vecA, const std::vector<T>& vecB) -> void
{
    if(vecA.size() == vecB.size())
    {
        for(size_t cnt = 0; cnt < vecA.size(); ++cnt)
        {
            ASSERT_EQ(vecA[cnt], vecB[cnt]);
        }
    }
    else
    {
        printf("ERROR: Vector size mismatch");
    }

}

// Test Cases //

// TODO: Create a generic test setup function

TEST(SortTest, Bubble)
{ 
    std::vector<double> sorted   = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    std::vector<double> unsorted = {7.0, 4.0, 2.0, 9.0, 3.0, 8.0, 6.0, 1.0, 5.0};

    BubbleSort(unsorted.begin(), unsorted.end());
    CheckElements(sorted, unsorted);
}

TEST(SortTest, Insertion)
{ 
    std::vector<double> sorted   = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    std::vector<double> unsorted = {7.0, 4.0, 2.0, 9.0, 3.0, 8.0, 6.0, 1.0, 5.0};

    InsertionSort(unsorted.begin(), unsorted.end());
    CheckElements(sorted, unsorted);
}

TEST(SortTest, InsertionByRotation)
{ 
    std::vector<double> sorted   = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    std::vector<double> unsorted = {7.0, 4.0, 2.0, 9.0, 3.0, 8.0, 6.0, 1.0, 5.0};

    InsertionSortByRotation(unsorted.begin(), unsorted.end());
    CheckElements(sorted, unsorted);
}

TEST(SortTest, SelectionMin)
{ 
    std::vector<double> sorted   = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    std::vector<double> unsorted = {7.0, 4.0, 2.0, 9.0, 3.0, 8.0, 6.0, 1.0, 5.0};

    SelectionSortMin(unsorted.begin(), unsorted.end());
    CheckElements(sorted, unsorted);
}


 
// Main entry of the test //

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}