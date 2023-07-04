#include<iostream>
#include<array>
using namespace std;

int main()
{
    int i;
    array<int,5> data_array={11,22,33,44,55};
    cout<<data_array.at(2);
    /*cout<<data_array.at(5) terminate called after throwing an instance of 'std::out_of_range'
     what():  array::at: __n (which is 5) >= _Nm (which is 5) */
    cout<<"\n"<<data_array[3];
    cout<<"\n"<<data_array.front();
    cout<<"\n"<<data_array.back();

    cout<<"\nSize is: "<<data_array.size();
    cout<<"\nMax-Size: "<<data_array.max_size();

    data_array.fill(10);
    cout<<"\n";
    for(i=0;i<5;i++)
       cout<<data_array.at(i)<<" ";

    array<int,5>a1={10,20,30,40,50};
    array<int,5>a2={1,2,3,4,5};

    a1.swap(a2);

    cout<<"\n";
    for(i=0;i<5;i++)
     cout<<a1.at(i)<<" ";
    cout<<"\n";
    for(i=0;i<5;i++)
       cout<<a2.at(i)<<" ";
}

/*
 ARRAY Container in STL:
 Arrays, as we all know, are collection of homogenous objects. array container in STL provides us 
 the implementation of static array, though it is rarely used in competitive programming as its static
 in nature but we'll still discuss array container cause it provides some member functions and non-member 
 functions which gives it an edge over the array defined classically like, int array_name[array_size].
  
 SYNTAX of array container:
 array<object_type, array_size> array_name;
 The above code creates an empty array of object_type with maximum size of array_size. However, 
 if you want to create an array with elements in it, you can do so by simply using the = operator, 
 here is an example :
 array<int, 4> odd_numbers = { 2, 4, 6, 8 };

 Member Functions of Array Template:
 Following are the important and most used member functions of array template.
 1.at() function:
 This method returns value in the array at the given range. If the given range is greater than the array size,
 out_of_range exception is thrown.
 2.[ ] Operator
 The use of operator [ ] is same as it was for normal arrays. It returns the value at the given position in
 the array.
 3.front() function: This method returns the first element in the array.
 4.back() function: This method returns the last element in the array. The point to note here is that if
 the array is not completely filled, back() will return the rightmost element in the array.
 5.fill() function: This method assigns the given value to every element of the array.
 6.swap() function: This method swaps the content of two arrays of same type and same size. It swaps index
 wise, thus element of index i of first array will be swapped with the element of index i of the second array,
 and if swapping any of the two elements thows an execption, swap() throws exception.
 7.Operators ( == , != , > , < , >= , <= )
 All these operators can be used to lexicographically compare values of two arrays.
 8.empty function: This method can be used to check whether the array is empty or not.
 Syntax: array_name.empty(), returns true if array is empty else return false.
 9.size function: This method returns the number of element present in the array.
 10.max_size function: This method returns the maximum size of the array.
 11.begin function: This method returns the iterator pointing to the first element of the array. Iterators are
 just like pointers and we’ll discuss them later in the lessons, for now you can just think of an iterator like
 a pointer to the array.
 12.end function: This method returns an iterator pointing to an element next to the last element in the array,
 for example the above array has 4 elements and the end() call will return the iterator pointing to the 4th  
 index of the array.
 
*/
