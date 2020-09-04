/*
***** ALL RESULTS ARE VERIFIED ******
//---------------------------------------------------------------------
// Test 1: The left_size is less than the right_size
//---------------------------------------------------------------------
This program will print out the union array and the intersection array

    int left []= {5,10,15,20,25,30,35,40};
    int right []= {3,10,13,20,23,28,30,33,35};
    int left_size = 8;
    int right_size = 9;
------------ RESULTS --------------------
The union array is: 3, 5, 10, 13, 15, 20, 23, 25, 28, 30, 30, 35, 40.
The intersection array is: 10, 20, 30, 35.


//---------------------------------------------------------------------
// Test 2: The left_size is greater than the right_size
//---------------------------------------------------------------------
    int left []= {5,10,15,20,25,30,35,40,45};
    int right []= {3,10,13,20,23,28,30,33};
    int left_size = 9;
    int right_size = 8;
------------ RESULTS --------------------
The union array is: 3, 5, 10, 13, 15, 20, 23, 25, 28, 30, 30, 35, 40, 45.
The intersection array is: 10, 20, 30.


//---------------------------------------------------------------------
// Test 3: Both arrays have equal size
//---------------------------------------------------------------------
    int left []= {5,10,15,20,25,30,35,40,45};
    int right []= {3,10,13,20,23,28,30,33, 35};
    int left_size = 9;
    int right_size = 9;
------------ RESULTS --------------------
The union array is: 3, 5, 10, 13, 15, 20, 23, 25, 28, 30, 30, 35, 40, 45.
The intersection array is: 10, 20, 30, 35.


//---------------------------------------------------------------------
// Test 4: The left array is empty
//---------------------------------------------------------------------
    int left []= {};
    int right []= {3,10,13,20,23,28,30,33, 35};
    int left_size = 0;
    int right_size = 9;
------------ RESULTS --------------------
The union array is: 3, 10, 13, 20, 23, 28, 30, 33, 35.
The intersection array is:

//---------------------------------------------------------------------
// Test 5: The right array is empty
//---------------------------------------------------------------------
    int left []= {5,10,15,20,25,30,35,40,45};
    int right []= {};
    int left_size = 9;
    int right_size = 0;
------------ RESULTS --------------------
The union array is: 5, 10, 15, 20, 25, 30, 35, 40, 45.
The intersection array is:

 //---------------------------------------------------------------------
// Test 6: Both arrays are empty
//---------------------------------------------------------------------
    int left []= {};
    int right []= {};
    int left_size = 0;
    int right_size = 0;
------------ RESULTS --------------------
The union array is:
The intersection array is:

//---------------------------------------------------------------------
// Test 6: Both arrays have the same elements
//---------------------------------------------------------------------
    int left []= {};
    int right []= {};
    int left_size = 0;
    int right_size = 0;
------------ RESULTS --------------------
The union array is: 5, 10, 15, 20, 25, 30, 35, 40, 45.
The intersection array is: 5, 10, 15, 20, 25, 30, 35, 40, 45.


*/
