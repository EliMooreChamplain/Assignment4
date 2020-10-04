//
//  sort.h
//  
//  Functions for bubble sort, selection sort, and insertion sort.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#ifndef sort_hpp
#define sort_hpp

#include <algorithm> // for swap()

using namespace std;

namespace csi281 {
    
    // Performs an in-place ascending sort of *array* of size *length*
    // using the bubble sort algorithm
    template <typename T>
    void bubbleSort(T array[], const int length) {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length - i; j++)
            {
                if (array[j] > array[j+1])
                {
                    T temp = array[j];  
                    array[j] = array[j+1];  
                    array[j+1] = temp;
                }
            }
        }
    }
    
    // Performs an in-place ascending sort of *array* of size *length*
    // using the selection sort algorithm
    template <typename T>
    void selectionSort(T array[], const int length) {
        for (int i = 0; i < length - 1; i++)
        {
            int min_index = i;
            for (int j = i + 1; j < length; j++)
            {
                if (array[j] < array[min_index])
                {
                    min_index = j;
                }

                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
                
        }
    }
    
    // Performs an in-place ascending sort of *array* of size *length*
    // using the insertion sort algorithm+[]o
    template <typename T>
    void insertionSort(T array[], const int length) {
        for (int i = 1; i < length; i++)
        {
            int insert_at = i;
            T item = array[i];
            int j = i - 1;
            while (j >= 0 && (array[j] > item))
            {
                array[j+1] = array[j];
                j--;
            }
            insert_at = j;
            array[j+1] = insert_at;
            array[insert_at] = item;
        }
    }
}


#endif /* sort_hpp */
