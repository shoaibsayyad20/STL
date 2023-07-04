#include <iostream>  
#include <map>  
#include <string>  
  
using namespace std;  
  
int main()  
{  
    multimap<string, string> m = {  
            {"India","New Delhi"},  
            {"India", "Hyderabad"},  
            {"United Kingdom", "London"},  
            {"United States", "Washington D.C"}  
    };  
      
    cout << "Size of map m: " << m.size() <<endl;      
    cout << "Elements in m: " << endl;  
      
    for (multimap<string, string>::iterator it = m.begin(); it != m.end(); ++it)  
    {  
       cout << "  [" << (*it).first << ", " << (*it).second << "]" << endl;  
    }  
  
    return 0;  
}  
/*
MultiMap:
Multimaps are part of the C++ STL (Standard Template Library). Multimaps are the associative containers like map 
that stores sorted key-value pair, but unlike maps which store only unique keys, multimap can have duplicate keys.
By default it uses < operator to compare the keys.
For example: A multimap of Employees where employee age is the key and name is the value can be represented as:
Keys	Values
23	Nikita
28	Robin
25	Deep
25	Aman
Multimap employee has duplicate keys age.

*/
