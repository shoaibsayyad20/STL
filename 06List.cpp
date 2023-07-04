#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int>l;
    list<int> l1{33,99,11,44,22,55,88,77,66};
    list<string> l2{"India","London","Mumbai","USA"};

    // cout<<l1[0];    -> Error

    list<int>::iterator p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }

    cout<<"\nTotal values in the list l1 are: "<<l1.size();

    l2.push_back("Bhopal");                    //push_back() insert value at the end of the list and push_front()
    l2.push_front("Delhi");                    //inserts value at the front of the list.

    cout<<"\n\n";

    list<string>::iterator p2=l2.begin();
    while(p2!=l2.end())
    {
        cout<<*p2<<" ";
        p2++; 
    }
    cout<<"\nTotal values in the list l2 are: "<<l2.size();

    cout<<endl;                

    l1.pop_back();             //pop_back() removes value from back of the list and pop_front() removes 
    l1.pop_front();            // the value from front of the list.
    
    p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    
    cout<<endl;
    l1.sort();
    p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }

    cout<<endl;
    l1.reverse();
    p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }

    cout<<endl;
    l1.remove(44);                   // Removes 44 across the list.
    p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }

    cout<<endl;
    l1.clear();                   // Clears the list and nothing will be printed.
    p=l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
}

/*
List:
List class supports a bidirectional, linear list.Vector supports random access but a list can be accessed 
sequentially only. List can be accessed front to back or back to front.
Array and Vector are contiguous containers, i.e they store their data on continuous memory, thus the insert 
operation at the middle of vector/array is very costly (in terms of number of operaton and process time) because 
we have to shift all the elements, linked list overcome this problem. Linked list can be implemented by using the
list container.

insert function
This method, as the name suggests, inserts an element at specific position, in a list. There are 3 variations of
insert(), they are as follows :

insert(iterator, element) : inserts element in the list before the position pointed by the iterator.

insert(iterator, count, element) : inserts element in the list before the position pointed by the iterator,
count number of times.

insert(iterator, start_iterator, end_iterator): insert the element pointed by start_iterator to the element pointed
by end_iterator before the position pointed by iterator

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l = {1,2,3,4,5};
    list<int>::iterator it = l.begin();           
    
    l.insert (it+1, 100);    // insert 100 before 2 position
    /* now the list is 1 100 2 3 4 5 
    
    list<int> new_l = {10,20,30,40};   // new list
    
    new_l.insert (new_l.begin(), l.begin(), l.end());
    /* 
        insert elements from beginning of list l to end of list l 
        before 1 position in list new_l */
    
    /* now the list new_l is 1 100 2 3 4 5 10 20 30 40 
    
    l.insert(l.begin(), 5, 10);  // insert 10 before beginning 5 times
    /* now l is 10 10 10 10 10 1 100 2 3 4 5 
    
    return 0;
}

splice function:
splice() method transfers the elements from one list to another. There are three versions of splice :

splice(iterator, list_name) : Transfers complete list list_name at position pointed by the iterator.

splice(iterator, list_name, iterator_pos) : Transfer elements pointed by iterator_pos from list_name at position
pointed by iterator.

splice(iterator, list_name, itr_start, itr_end) : Transfer range specified by itr_start and itr_end from 
list_name at position pointed by iterator.

#include <iostream>
#include <list>

using namespace std;

int main ()
{
    list<int> list1 = {1,2,3,4};
    list<int> list2 = {5,6,7,8};
    list<int>::iterator it;
    
    it = list1.begin();
    ++it;   //pointing to second position           
    
    list1.splice(it, list2);
    /* transfer all elements of list2 at position 2 in list1 */
    /* now list1 is 1 5 6 7 8 2 3 4 and list2 is empty 
    
                                          
    list2.splice(list2.begin(), list1, it);
    /* transfer element pointed by it in list1 to the beginning of list2 */
    /* list2 is now 5 and list1 is 1 6 7 8 2 3 4
    
    return 0;
}




*/