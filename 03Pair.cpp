#include<iostream>
using namespace std;
class Student
{
    private:
     string name;
     int age;
    public:
     void setStudent(string s,int a)
     {
        name=s;
        age=a;
     }
     void showStudent()
     {
        cout<<"\nName:"<<name<<"  Age:"<<age;
     }
};

int main()
{
    pair<string,int>p1;
    pair<string,string>p2;     // string is one of the predefined class in STL.
    pair<string,float>p3;
    pair<int,Student>p4;      // Student is user-defined.
    pair<string,int>p5;

    p1=make_pair("Shoaib",18);                 // make_pair() is used to inserting value into pair.
    p2=make_pair("India","New Delhi");
    p3=make_pair("Drilling C++",345.5f);
    p5=make_pair("Anwar",16);

    Student s1;
    s1.setStudent("Akram",18);
    p4=make_pair(1,s1);
    
    cout<<"\n"<<p1.first<<" "<<p1.second;        // For accessing pair member obj.first and obj.second are used.
    cout<<"\n"<<p2.first<<" "<<p2.second;
    cout<<"\n"<<p3.first<<" "<<p3.second;
    cout<<"\n"<<p4.first<<" ";
    Student s2=p4.second;
    s2.showStudent();

    if(p1==p5)
        cout<< "\nPairs are equal";
   else
        cout<< "\nPairs are not equal";

   p1.swap(p5);
   cout<<"\n"<<p1.first<<" "<<p1.second; 
   cout<<"\n"<<p5.first<<" "<<p5.second; 
}

/*
PAIR Template in STL:
NOTE: Although Pair and Tuple are not actually the part of container library but we'll still discuss them as they
are very commonly required in programming competitions and they make certain things very easy to implement.Many times
we store data in pairs like contry and capiatal, name and phone number etc. For data pairing we have pair class in 
STL library.
Syntax: pair<T1,T2>pair1;   e.g: pair<string,int>p1; we have combined 2 differrent data types in a pair.

Syntax: pair<T1,T2>  pair1, pair2 ;
The above code creates two pairs, namely pair1 and pair2, both having first object of type T1 and second object of
type T2.Now T1 will be referred as first and T2 will be referred as second member of pair1 and pair2.

Pair Template: Some Commonly used Functions
Here are some function for pair template :
Operator = : assign values to a pair.
swap : swaps the contents of the pair.
make_pair() : create and returns a pair having objects defined by parameter list.
Operators( == , != , > , < , <= , >= ) : lexicographically compares two pairs.
*/
