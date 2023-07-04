#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;                          //Zero length vector.
    vector<int> v1{10,20,30,40,50};         //Here initial capacity equal to the initializers.
    vector <char> v2(5);                    //Creates 5 element char vector.
    vector<char> v3(4,'a');                 //Initializes 4 element char vector with 'a'.
    vector<string>v4(3,"Hello");
    cout<<v4[0]<<" ";
    cout<<v4[1]<<" ";
    cout<<v4[2]<<" ";
   
    cout<<"\n";
    for(int i=0;i<5;i++)
     cout<<v1.at(i)<<" ";   
    
    
    cout<<"\nCurrent capacity is: "<<v.capacity();
    for(int i=0;i<10;i++)
    {  
        v.push_back(10*(i+1));                                    //push_back() is used to add value to the vector at the end.
        cout<<"\nCurrent capacity is: "<<v.capacity();
    }
    cout<<"\n";
    for(int i=0;i<v.size();i++)   //capacity() gives number of elements that can be 
    {                            //stored in vector. size() gives total number of elements which are currently stored.
        cout<<"\n"<<v[i];
    }

    cout<<"\n\n";

    vector<int>:: iterator it=v.begin();     //iterators are used to insert value in between vector.
    v.insert(it+3,35);                       //it means before first element it+1 means after 1 and before 2.
    for(int i=0;i<v.size();i++)
    {
        cout<<"\n"<<v[i];
    }
     
    cout<<"\nValue at index 3: "<<v.at(3);   //returns element at ith index.
    cout<<"\nFirst value: "<<v.front();     //returns first element of vector.
    cout<<"\nLast value: "<<v.back();      //returns last element of vector.



   /* v.clear();                                       //It removes all element from the vector.
    cout<<"\nCurrent capacity is: "<<v.capacity();
    cout<<"\nTotal number of elements are: "<<v.size(); */

    cout<<"\nAfetr POP";    //capacity increases as we push but it will not decrease when we pop
    
    for(int i=0;i<10;i++)
    {  
        v.pop_back();                                        //pop_back() removes the last element.
        cout<<"\nCurrent capacity is: "<<v.capacity();
        cout<<"\nTotal number of elements are: "<<v.size();  //size() will give current number of elements in an array.
    }
}
/*
VECTOR Container in STL:
An array works fine when we have to implement sequential data structures like arrays, except it is static, i.e. we
have to define its maximum size during its initialization and it cannot contain elements greater than its maximum
size. Now suppose, if during the program execution we have to store elements more than its size, or if we are 
reading input stream of elements and we do not know the upper bound of the number of elements, there are high
chances of occurrence of index_out_bound exception or unwanted termination of the program.

We can do one thing, initialize the array with maximum size allowed by the complier, i.e. 10^6 elements per array, 
but that is highly space consuming approach and there is a wastage of space if number of elements to be entered are
way too less, thus this approach is never used in programming.

Solution of the above problem is dynamic arrays! They have dynamic size, i.e. their size can change during runtime. 
Container library provides vectors to replicate dynamic arrays.

SYNTAX for creating a vector is: vector< object_type > vector_name;

Vector being a dynamic array, doesn't needs size during declaration, hence the above code will create a blank vector.

 

*/