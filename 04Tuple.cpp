#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    tuple<string, int, int>t1,t2;
    t1= make_tuple("Shoaib",15,80);   //make_tuple() is used to insert value into tuple.
    
    cout<<get<0>(t1)<<" ";           //get<PositionNumberOfMember>(tupleObject) is used for accessing tuple members.
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" ";

    // Use of get() to change values of tuple
    get<0>(t1)="Anwar";
    get<2>(t1)=90;

    //Printing updated values of tuple
    cout<<"\n"<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);

    t2=make_tuple("Sayyad",18,95);
    t1.swap(t2);                                     //The swap(), swaps the elements of the two different tuples. 
    cout<<"\nAfter swapping tuple: ";
    cout<<"\n"<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);   
    cout<<"\n"<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2);
   
    cout<<"\nThe size of tuple: "<<tuple_size<decltype(t1)>::value; // value[public static member constant]: the number of elements in the tuple
    
    //code to demonstrate working of tie()
    tuple<int,char,double>t3(20,'g',17.5);     //Tuple object t3 is initialized by constructor in tuple class.
    int i;char c;double d;

    // Use of tie() without ignore
    tie(i,c,d) = t3;
    
    // Displaying unpacked tuple elements
    // without ignore
    cout << "\nThe unpacked tuple values (without ignore) are : ";
    cout << i << " " << c << " " << d;
    cout << "\n";

    // Use of tie() with ignore
    // ignores char value
    tie(i,ignore,d) = t3;
     
    // Displaying unpacked tuple elements
    // with ignore
    cout << "\nThe unpacked tuple values (with ignore) are : ";
    cout << i << " " << d;
    cout << "\n";   
}
/*
TUPLE in STL:
tuple and pair are very similar in their structure. Just like in pair we can pair two heterogeneous object, in tuple
we can pair multiple heterogeneous objects.
A tuple is an object that can hold a number of elements. The elements can be of different data types. The elements
of tuples are initialized as arguments in order in which they will be accessed. 
Syntax: tuple<T1,T2,T3>tuple1;    e.g: tuple<string,int,int>t1;

Operations on tuple :- 
1. get() :- get() is used to access the tuple values and modify them, it accepts the index and tuple name as 
arguments to access a particular tuple element. 
2. make_tuple() :- make_tuple() is used to assign tuple with values. The values passed should be in order with the
values declared in tuple. 
3. tuple_size :- It returns the number of elements present in the tuple.
4. swap() :- The swap(), swaps the elements of the two different tuples. 
5. tie() :- The work of tie() is to unpack the tuple values into separate variables. There are two variants of 
tie(), with and without “ignore” , the “ignore” ignores a particular tuple element and stops it from getting 
unpacked. 
6.Tuple_element : returns the type of tuple element     |  using type = std::tuple_element<0,decltype(data)>::type;

*/

/*
Type Inference in C++ (auto and decltype):
Type Inference refers to automatic deduction of the data type of an expression in a programming language. Before 
C++ 11, each data type needed to be explicitly declared at compile-time, limiting the values of an expression at 
runtime but after the new version of C++, many keywords are included which allows a programmer to leave the type 
deduction to the compiler itself. With type inference capabilities, we can spend less time having to write out 
things the compiler already knows. As all the types are deduced in the compiler phase only, the time for compilation 
increases slightly but it does not affect the run time of the program.

1) auto keyword: The auto keyword specifies that the type of the variable that is being declared will be 
automatically deducted from its initializer. In the case of functions, if their return type is auto then that will
be evaluated by return type expression at runtime. Good use of auto is to avoid long initializations when creating 
iterators for containers.   
Note: The variable declared with auto keyword should be initialized at the time of its declaration only or else 
there will be a compile-time error. 

int main()
{
    // auto a; this line will give error
    // because 'a' is not initialized at
    // the time of declaration
    // a=33;
 
    // see here x ,y,ptr are
    // initialised at the time of
    // declaration hence there is
    // no error in them
    auto x = 4;
    auto y = 3.37;
      auto z = 3.37f;
      auto c = 'a';
    auto ptr = &x;
      auto pptr = &ptr; //pointer to a pointer
    cout << typeid(x).name() << endl
         << typeid(y).name() << endl
         << typeid(z).name() << endl
         << typeid(c).name() << endl
         << typeid(ptr).name() << endl
           << typeid(pptr).name() << endl;
 
    return 0;
}
Typeid is an operator which is used where the dynamic type of an object needs to be known. 

typeid(x).name() returns the data type of x, for example, it returns ‘i’ for integers, ‘d’ for doubles, 
‘f’ for float, ‘c’ for char , ‘Pi’ for the pointer to integer, ‘Pd’ for the pointer to double, ‘Pf’ for the pointer
to float, ‘Pc’ for the pointer to char,’PPi’ for the pointer to pointer to integer. Single Pointer results in  
prefix ‘P’ , double pointer results in ‘PP’ as prefix and so on. But the actual name returned is mostly compiler 
dependent. 

typeid is an operator in C++. 
It is used where the dynamic type or runtime type information of an object is needed.
It is included in the <typeinfo> library. Hence inorder to use typeid, this library should be included in the program.
Syntax:  
typeid(type);
OR
typeid(expression);

Parameters: typeid operator accepts a parameter, based on the syntax used in the program:  
type: This parameter is passed when the runtime type information of a variable or an object is needed. In this, 
there is no evaluation that needs to be done inside type and simply the type information is to be known.

expression: This parameter is passed when the runtime type information of an expression is needed. In this, the 
expression is first evaluated. Then the type information of the final result is then provided.

Return value: This operator provides the runtime type information of the specified parameter and hence that type 
information is returned, as a reference to an object of class type_info.

The typeid expression is an lvalue expression.means give output as 1value.
lvalue simply means an object that has an identifiable location in memory (i.e. having an address).
In any assignment statement “lvalue” must have the capability to store the data.
lvalue cannot be a function, expression (like a+b) or a constant (like 3 , 4 , etc.).
The l-value is one of the following:
The name of the variable of any type i.e. , an identifier of integral, floating, pointer, structure, or union type.
A subscript ([ ]) expression that does not evaluate to an array.
A unary-indirection (*) expression that does not refer to an array
An l-value expression in parentheses.
A const object (a nonmodifiable l-value).
The result of indirection through a pointer, provided that it isn’t a function pointer.
The result of member access through pointer(-> or .). i.e member variable of an object.
R-value: r-value” refers to data value that is stored at some address in memory. A r-value is an expression, that can’t have
a value assigned to it, which means r-value can appear on right but not on left hand side of an assignment operator(=). 

2) decltype Keyword: It inspects the declared type of an entity or the type of an expression. ‘auto’ lets you 
declare a variable with a particular type whereas decltype lets you extract the type from the variable so decltype
is sort of an operator that evaluates the type of passed expression. 
Decltype gives the type information at compile time while typeid gives at runtime.
So, if we have a base class reference (or pointer) referring to (or pointing to) a derived class object, the
decltype would give type as base class reference (or pointer, but typeid would give the derived type reference
(or pointer).
*/
