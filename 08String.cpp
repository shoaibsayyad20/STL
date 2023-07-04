#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    string s1,s4;          //It creates object s1 having empty string.
    string s2="Student";  // OR string s2("Student") OR string s2=string("Student");
    char str[]="Hello";
    string s3=str;    //char array is passed.So constructor having pointer variable as formal argument.
    string s5=s2;     //Refernce of s2 is passed. So constructor having reference variable as formal argument. OR string s5(s2);

    s1="Hello";        //assignment operator of string class is called.
    s4=s1+s2;          //concatenation of s1 and s2 is performed and stored in s4.

     
    cout<<s1<<endl<<s2<<endl<<s4;
    cout<<"\nEnter your name: ";
    string s6;
    cin>>s6;
    cout<<"\nName is: "<<s6;
    

    s1=s2+str;
    cout<<endl<<s1;

    s1=s2+"123";
    cout<<endl<<s1;

    s1=s2+'A';
    cout<<endl<<s1;

   // s1=s2+123------>Error

   s1.assign("Anwar");
   cout<<endl<<s1;

   s1.append(" sayyad");
   cout<<endl<<s1;
   
   s1.insert(5,"Kamaloddin");
   cout<<endl<<s1;
   
   s1.replace(5,10,"Shoaib");                 //replace(index,length,replacingCharacter)
   cout<<endl<<s1;
  
   s1.erase();                                 //erase complete content.
   cout<<endl<<s1;

   string s="Hello online online students";

   int i=s.find("online");                 // returns starting index of first occurence of argument and if not present returns -1.
   cout<<endl<<i;                          // rfind() start reserch reversely.

    i=s.rfind("online");
    cout<<endl<<i;
   
    s1="Amar";
    s2="Amar";
    i=s1.compare(s2);                      //==0  same  -1: dictionary order  1: non-dict order
    cout<<endl<<i;

   
    char str2[20];
    strcpy(str2,s1.c_str());            //c_str() it converts string object to char array
    cout<<endl<<str2;

    cout<<"\nSize of s1 is: "<<s1.size();
}

/*
String:
Using null-terminated character arrays are not technically data types.So c++ operators cannot be applied to them.

String class:
The string class(child) is a specialization of a more general template class called basic_string(parent).
since defining a class in c++ is creating a new data type, string is derived data type.
this means operators can be overloaded for the class.

char array is faster than string class. But, string is safer than char array.
string is an another container class.

For using string related function in C      : include<string.h> 
For using string STL container class in C++ : include<string> 

string class supports manny constructor, some of them are:
string()
string(const char *str)
string(const string &str)

string class supports many operator:
Concatenation assignment(+=),Equality(==),Inequality(!=),Less than(<),Less than or equal(<=),greater(>),greater than or equal(>=),
subscripting([]), Inseration for o/p(<<),Extraction for i/o(>>) but taking string i/o with whitespace is not work.

we can mix string objects with another string object or c style string.
c++ string can also be concatenated with character constant.


*/