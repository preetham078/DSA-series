// functions

// returnType printhello(){
//     cout<<"hello";
// }

// input->work->output

// int main(){
// return 0;  // int has return type 0

// }

// { } block of code

// the function which doesn't return any value
//  that is void

// exmple

// #include<iostream>
// using namespace std;
// void hello()     //function define
// {
//     cout<<"helo preetham wellcome"<<endl;
// }
// int main()
// {
//     hello();     //function call / invoke
//     hello();
//     hello();
//     return 0;
// }

// suppose the funtion want to return the integer value

// #include<iostream>
// using namespace std;
// int hello()     //function define
// {
//     cout<<"helo preetham wellcome"<<endl;
//     return 10;
// }
// int main()
// {
//     int a=hello();
//     cout<<"val="<<a<<endl;
//     hello();     //function call / invoke
//     hello();
//     hello();
//     return 0;
// }

// parameters

// returnType functionname(type p1,type p2){
//  do some workkkk
// }

// example

// Enter the two numbers:102993 74394379
// sum=74497372

// #include<iostream>
// using namespace std;
// int sum(int a,int b)
// {
//     int c=a+b;
//     return c;

// }
// int main()
// {
//     int x,y;
//     cout<<"Enter the two numbers:";
//     cin>>x>>y;
//     int s=sum(x,y);
//     cout<<"sum="<<s<<endl;

// }

// repeation of the same code is called redandency

// Enter the two numbers:102993 74394379
// sum=74497372

// #include<iostream>
// using namespace std;
// double sum(double a,double b)
// {
// double c=a+b;
//     return c;

// }
// int main()
// {
//    double x,y;
//     cout<<"Enter the two numbers:";
//     cin>>x>>y;
//   double s=sum(x,y);
//     cout<<"sum="<<s<<endl;

// }

// minimum of two number

// #include<iostream>
// using namespace std;
// int min(int a,int b)            //parameter are the copy of the argument
// {
//     if(a<b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }
// int main()
// {
//     int x,y;    //arguments are the actual value that store to a function
//     cout<<"Enter two number :";
//     cin>>x>>y;
//     cout<<"min="<<min(x,y)<<endl;
//     return 0;

// }

//  sum of numbers from 1 TO N

// #include<iostream>
// using namespace std;
// int sum(int n)
// {
//     int a;
//     int sum=0;
//     for (int i=1;i<=n;i++)
//     {
//         sum+=i;
//     }
//     return sum;

// }
// int main()
// {
//    int a;
//    cout<<"enter the number:";
//    cin>>a;
//    cout<<"sum="<<sum(a)<<endl;
//    return 0;
// }

// calculate n factroial

// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     int a;
//     int fac=1;
//     for (int i=1;i<=n;i++)
//     {
//     fac*=i;
//     }
//     return fac;

// }
// int main()
// {
//    int a;
//    cout<<"enter the number:";
//    cin>>a;
//    cout<<"factorial="<<fact(a)<<endl;
//    return 0;
// }

// FUNCTION MEMORY

// two types

// stack ->static memory
// heep ->dynamic memory
//
//|             |
//|_____________|
//|         sum | ------> the function called letter will store here
//|_____________|
//|        main |------->stack frame
//|_____________|          -all the variable called in main
//   call stack            main function store in that
//
//
// the statement that return after return statement is not valied

// pass by value
// copy of argument is passed to function

// main ()                sum()
//   ^                      ^
//   |                      |
// x=5 ,y=4             a=5,b=4

// ex;

// #include<iostream>
// using namespace std;
// int sum(int a,int b)
// {
//     int c=a+b;
//     a=a+10;  //15
//     b=b+10;  //14
//     return c;

// }
// int main()
// {
//     int x=5,y=4;
//     int s=sum(x,y);
//     cout<<"sum="<<s<<endl;
//     cout<<x<<endl;//5
//     cout<<y<<endl;//4
//     return 0;

// }

// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^-----------> this fenomena is called pass by value
// #include <iostream>

// // The parameter 'num' is passed by value (a copy is created)
// void modifyValue(int num) {
//     num = 100; // Only changes the local copy
// }

// int main() {
//     int original = 5;
    
//     modifyValue(original);
    
//     // Output will still be 5, not 100
//     std::cout << "Original value: " << original << std::endl; 
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int a(int x)
// {
//     x=100;
//     return x;

// }
// int main()
// {
//     int x=5;
//     int y=a(x);
//     cout<<y<<endl; //100
//     cout<<a(1);
//     return 0;

// }

// sum of the digits

// #include<iostream>
// using namespace std;
// int main()
// {
//     int m = 0;
//     int n = 0;
//     int sum=0;
//     cout<<"enter the number:";
//     cin>>m;
//     cout<<m;
//     while(m>0)
//     {
//        n=m%10;
//        sum=sum+n;
//        m=m/10;
//     }
//     cout<<"sum of "<<"is ="<<sum<<endl;
//     return 0;

// }

// to fint the binomial coefficent

// #include<iostream>
// using namespace std;
// int fact(int a)
// {   int sum=1;
//     for(int i=1;i<=a;i++)
//     {
//         sum=sum*i;
//     }
//     return sum;
// }
// int main()
// {
//     int n ,r;
//     cout<<"enter the number:";
//     cin>>n>>r;
//     int ncr=fact(n)/(fact(r)*fact(n-r));
//     cout<<ncr<<endl;
//     return 0;


// }

