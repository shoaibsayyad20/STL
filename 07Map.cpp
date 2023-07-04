
#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> customer;

    customer[100]="Gajendra";
    customer[123]="Dilip";
    customer[145]="Aditya";
    customer[171]="Shahid";
    customer[200]="Rajesh";

    map<int,string>c{ {100,"Gajendra"}, {123,"Dilip"}, {145,"Aditya"}, {171,"Shahid"}, {200,"Rajesh"} };

    cout<<customer[100]<<endl;
    cout<<customer[123]<<endl;
    cout<<customer[145]<<endl;
    cout<<customer[171]<<endl;
    cout<<customer[200]<<endl;

    cout<<endl<<endl;
    
    map<int,string>::iterator p=customer.begin();

    while(p!=customer.end())
    {
        cout<<p->second<<endl;       //p->first points index and p->second points value.
        p++;     
    }

    cout<<endl<<customer.at(145);
    cout<<"\nTotal pairs in the map: "<<customer.size();

    if(customer.empty())
       cout<<"\nMap is empty";
    else
       cout<<"\nMap is not empty";

    customer.insert(pair<int,string>(205,"Shoaib"));
    cout<<"\n";
    p=customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<endl;       
        p++;     
    }

    customer.clear();
    cout<<"\n";
    p=customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<endl;       
        p++;     
    }





}
/*
Map:
Arrays are of 2 types:
1.Numeric array: Array having numeric indexing.
2.Associative Array: Array having non-numeric indexing such as name of person and it is associated with the values 
stored in an array which is known as key-value pair. Here key refers ito the index and value refers to the elements
stored in an array.e.g: Marks of person stored in array having name of person as indexing in the form of string.
int marks[20];
marks["Rahul"]=80;

Maps are used to replicate associative arrays. Maps contain sorted key-value pair in which each key is unique
and cannot be changed and it can be inserted or deleted but cannot be altered. Values can be changed but keys 
cannot be altered.

Maps always arrange its keys in sorted order.In case the keys are of string type, they are sorted in 
dictionary order.

erase:
erase() removes the entry from the map pointed by the iterator (which is passed as parameter), however if we want
to remove all the elements from the map, we can use clear(), it clears the map and sets its size to 0.

There are two variations of erase :

erase(iterator_itr) :This removes entry from the map pointed by iterator iterator_itr, reducing the size of map by1.
erase(start_iterator, end_iterator) : It removes the elements in range specified by the start_iterator and
end_iterator.

The insert_or_assing() works exactly as insert() except that if the given key is already present in the map 
then its value is modified.
*/

