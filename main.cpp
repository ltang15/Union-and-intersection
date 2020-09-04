/*
 * Project: Union and intersection
 * Purpose: Printing the union array and the intersection array of two given sorted unique arrays
 * Notes: Inputting two sorted unique arrays
*/

#include <iostream>
using namespace std;

template <typename T>
void union_array(T left[], int left_size, T right[], int right_size, T result[], int& result_size);
template <typename T>
void intersection(T left[], int left_size, T right[], int right_size, T result[], int& result_size);

template <typename T>
void print_array (T arr[], int size);

int main() {

    cout << endl<<endl<<endl;

    int left []= {5,10,15,20,25,30,35,40};
    int right []= {3,10,13,20,23,28,30,33,35};
    int left_size = 8;
    int right_size = 9;
    int result_size = 0;

    cout << "The two given sorted, unique arrays: " << endl;
    cout << "The left one is: ";
    print_array (left,left_size);// print the left array
    cout << endl;
    cout << "The right one is: ";
    print_array (right, right_size);// print the right array
    cout << endl << endl << endl;

    int unionA [100];
    int interA [100];
    union_array(left, left_size, right, right_size, unionA, result_size);
    cout << "The union array is: ";
    print_array (unionA, result_size);//print the union array
    cout << endl;

    intersection(left, left_size, right, right_size, interA, result_size);
    cout << "The intersection array is: ";
    print_array (interA, result_size);// print the intersection array

    cout << endl << endl << "=========END=========" << endl << endl;

    return 0;
}

template <typename T>
void union_array(T left[], int left_size, T right[], int right_size, T result[], int& result_size)
{
    int i=0, j=0;// initialize the counter; i for the left array and j for the right array

    T* walker1 = left;// walker 1 points to the left array
    T* walker2 = right;// walker 2 points to the right array
    T* walker3 = result;// walker 3 points to the result array

    // Comparing the element from the left array to the right array

    while ( i < left_size && j < right_size)
    {
        //The loop breaks when one of two array is finished checking

        if (*(walker1 + i) < *(walker2 + j)) {
            // The condition is when the value of the left one is less than the value of the right one

            *(walker3 + result_size) = *(walker1 + i);// The value of the left one will be pasted to the result array

            i++; // increment the left counter, so the walker1 can point to the next element of the left array
            result_size ++; // increment the size by one when there is one element pasted into the result array
        }
        else if (*(walker1 + i) > *(walker2 + j)){
            // The condition is when the value of the left one is greater than the value of the right one

            *(walker3 + result_size) = *(walker2 + i);// The value of the right one will be pasted to the result array

            j++; // increment the right counter, so the walker2 can point to the next element of the right array
            result_size++; // increment the size by one when there is one element pasted into the result array
        }
        else{
            // The condition is when the value of the left one is equal to the value of the right one

            *(walker3 + result_size) = *(walker1 + i); //The value of the left one (or right one) will be pasted to the result array

            i++;// increment the left counter, so the walker1 can point to the next element of the left array
            j++;// increment the right counter, so the walker2 can point to the next element of the left array
            result_size++;// increment the size by one when there is one element pasted into the result array
        }

    }
    while (i < left_size){
        //This loop will get the remaining elements of the left arrays when the left_size is greater than the right_size

        *(walker3 + result_size) = *(walker1 + i); //The value of the left one will be pasted to the result array

        i++;
        result_size++;
    }
    while (j < right_size){
        //This loop will get the remaining elements of the right arrays when the left_size is less than the right_size

        *(walker3 + result_size) = *(walker2 + j); //The value of the right one will be pasted to the result array

        j++;
        result_size++;
    }
}

template <typename T>
void intersection(T left[], int left_size, T right[], int right_size, T result[], int& result_size)
{
    int i=0, j=0;
    result_size =0;
    T* walker1 = left;
    T* walker2 = right;
    T* walker3 = result;

    // Comparing the element from the left array to the right array
    while ( i < left_size && j < right_size)
    {
        if (*(walker1 + i) < *(walker2 +j )) {
            // The condition is when the value of the left one is less than the value of the right one

            i++; // increment the left counter, so the walker1 can point to the next element of the left array

        }
        else if (*(walker1 + i) > *(walker2 + j)){
            // The condition is when the value of the right one is less than the value of the left one

            j++; // increment the right counter, so the walker1 can point to the next element of the left array

        }
        else{
            // The condition is when the value of the left one is equal to the value of the right one
            *(walker3 + result_size) = *(walker2 + j);
            i++;
            j++;
            result_size++; // increment the size by one when there is one element pasted into the result array

        }
    }

}

template <typename T>

void print_array (T arr[], int size){
    // Printing the array

    T* walker = arr; // points walker to the array

    for (int i=0; i < size; i++){
        // This loop checks through every elements of the array

        if (i == size -1)
            cout << *walker << "."; //The last element will be printed with the period at the end
        else
            cout << *walker << ", "; // All elements excepts that last one will be printed and separated by a comma

        walker++; // This pointer goes through every elements of the array
    }

}
