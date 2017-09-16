//============================================================================
// Name        : UAS_test.cpp
// Author      : Yekta Ataozden
// Description : Sorting an array.
//============================================================================

#include <iostream>
using namespace std;

/**
  * Overview: Given an unsorted array, its elements are
  *           taken and sorted into another array.
  *
  * \param: unsorted   An unsorted array with n elements.
  * \param: sorted   An empty array that will hold the sorted elements.
  * \param: length The length of both arrays.
  */
void sort(const int unsorted[], int sorted[], int length)
{
    // Copy all the integers form a constant array to a alterable one.
    for(int d = 0; d<length; d++){
        sorted[d] = unsorted[d];
        }

    // Sort the array.
    for(int place=0;place<length;place++){
        int smallest = sorted[place];
        int place_of_smallest = place;
    
        //Go through all the array to find the smallest one
        for(int i=place;i<length;i++){
            if(sorted[i] < smallest){
                smallest = sorted[i];
                place_of_smallest = i;
            }
        }
        // Put the unsorted smallest value in its proper place
        sorted[place_of_smallest] = sorted[place];
        sorted[place] = smallest;
    }

    // Print the sorted array.
    for(int h=0;h<length;h++){
        cout << sorted[h];
        if(h < length-1)
            cout << ",";
    }
    return;
}

//Example main
int main() {
  int unsorted [] = {2,3,10,-2,100,1};
  int sorted[5] = {};
  sort(unsorted,sorted,6);
  return 0;
}




