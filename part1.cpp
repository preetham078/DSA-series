// ;terminator
// for output cout<<"Hello World!"<<endl;
// writing the code in main function
// int main(){
//     cout<<"Hello World!"<<endl;
// 

// code ex1

// #include <iostream> is a preprocessor directive that includes the iostream library, which allows us to use input and output streams in C++. The iostream library provides functionalities for reading from and writing to the console, among other things. In this code snippet, we are using it to output "Hello World!" to the console.
// using namespace std; is a directive that allows us to use all the names in the std namespace without having to prefix them with std::. This means that we can write cout instead of std::cout and endl instead of std::endl, making our code cleaner and easier to read. However, it's important to note that using namespace std; can lead to name conflicts in larger projects, so it's often recommended to use it only in small programs or within specific scopes.
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"wwelcome \n preetham"<<endl;
//     // if we dont put endl the out put will print on same line and if there is no next line in the end the persentage symbol will be printed
// // \n is escape sequence to print in next line
//     // return 0: In C++, the main function is the entry point of the program. It is where the execution of the program begins. The return 0; statement at the end of the main function indicates that the program has executed successfully. It is a convention to return 0 to signify that the program has completed without any errors. If you want to indicate an error, you can return a non-zero value. However, in modern C++, if you omit the return statement in the main function, it will automatically return 0, so it's not strictly necessary to include it.
//     return 0;

// }



// how to run code
// day1.cpp -> compile -> day1.out -> run
// to compile: g++ day1.cpp -o day1.out
// to run: ./day1.out



// variables

// identifier: it is the name of the variable given by us 
// data type



// primitives data types in c++ are

//  int ,char, float, double, bool
// int: It is a data type in C++ that is used to store integer values,
// char: It is a data type in C++ that is used to store a single character. It can hold any character from the ASCII character set, including letters, digits, and special symbols. A char variable is typically declared using single quotes, for example: char myChar = 'A'; This would assign the character 'A' to the variable myChar.
// float: It is a data type in C++ that is used to store single-precision
// floating-point numbers. It can represent a wide range of values, including decimal numbers, but it has limited precision compared to the double data type. A float variable is typically declared using the float keyword, for example: float myFloat = 3.14f; The 'f' suffix indicates that the literal value is a float.
// double: It is a data type in C++ that is used to store double-precision
// floating-point numbers. It can represent a wider range of values and has greater precision compared to
// the float data type. A double variable is typically declared using the double keyword, for example: double myDouble = 3.14159; This would assign the value 3.14159 to the variable myDouble.
// bool: It is a data type in C++ that is used to store boolean values,
// which can be either true or false. A bool variable is typically declared using the bool keyword, for example: bool isRaining = true; This would assign the value true to the variable isRaining. Boolean values are often used in conditional statements and loops to control the flow of a program based on certain conditions.


// code ex2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age=10;
//     float pi=3.14;
//     char grade='a';
//     bool failed=false;
//     cout<<age<<pi<<grade<<failed<<endl;
//     return 0;
// }



// 1 byte = 8 bits
// 1 bit can store 2 values (0 and 1)

// int = 4 bytes = 32 bits
// char = 1 byte = 8 bits
// float = 4 bytes = 32 bits
// double = 8 bytes = 64 bits
// bool = 1 byte = 8 bits (although it can only store true or false

// ASCII: American Standard Code for Information Interchange
// A=65 B=66 C=67 D=68 E=69 F=70 G=71 H=72 I=73 J=74 K=75 L=76 M=77 N=78 O=79 P=80 Q=81 R=82 S=83 T=84 U=85 V=86 W=87 X=88 Y=89 Z=90
// a=97 b=98 c=99 d=100 e=101 f=102 g=103 h=104 i=105 j=106 k=107 l=108 m=109 n=110 o=111 p=112 q=113 r=114 s=115 t=116 u=117 v=118 w=119 x=120 y=121 z=122

// Type Casting: Type casting is a way to convert a variable from one data type to another. In C++, there are two types of type casting: 
// implicit and explicit.
// Implicit type casting, also known as type promotion, occurs automatically when a value of one data type is assigned to a variable of another data type.
// or small data type is assigned to a larger data type. The compiler automatically converts the value to the larger data type to prevent data loss.
//  For example, if you assign an integer value to a float variable, the integer will be automatically converted to a float. Explicit type casting, on the other hand, is done manually by the programmer using casting operators. For example, you can use static_cast<float>(myInt) to explicitly convert an integer variable myInt to a float.


// code ex3 on implicit type casting

// #include<iostream>
// using namespace std;
// int main()
// {
//     char grade='A';
//     int a=grade;
//     cout<<a<<endl;
//     return 0;

// }

// code ex4 on explicit type casting

// #include<iostream>
// using namespace std;
// int main()
// {
//     double pi=3.09432758598;
//     int a=(int)pi;
//     cout<<a<<endl;
//     return 0;

// }

// input in c++


// code ex5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     float b;
//     cin>>a>>b;
//     float c=a/b;
//     cout<<c<<endl;
//     return 0;

// }


// operators in c++


// arithmetic operators: +, -, *, /, %
// assignment operators: =, +=, -=, *=, /=, %=
// comparison operators: ==, !=, >, <, >=, <=
// logical operators: &&, ||, !
// bitwise operators: &, |, ^, ~, <<, >>
// increment and decrement operators: ++, --
// conditional operator: ? :            

// example 

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<((3>1)&&(2>1))<<endl;
//     cout<<((3>1)||(2<1))<<endl;
//     return 0;
// }

// example on increment and decrement operators

// #include<iostream>
// using namespace std;
// int main()
// { int a=10;
//     cout<<a++<<endl; // post increment: it will print the value of a first and then increment it
//     cout<<a<<endl; // now a is 11
//     cout<<++a<<endl; // pre increment: it will increment the value of a first and then print it
//     cout<<a--<<endl; // post decrement: it will print the value of a first and then decrement it
//     cout<<a<<endl; // now a is 10
//     cout<<--a<<endl; // pre decrement: it will decrement the value of a first and then print it
//     return 0;

// }
