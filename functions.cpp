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


#include<iostream>
using namespace std;
int hello()     //function define
{
    cout<<"helo preetham wellcome"<<endl;
    return 10;
}
int main()
{
    int a=hello();
    cout<<"val="<<a<<endl;
    hello();     //function call / invoke
    hello();
    hello();
    return 0;
}