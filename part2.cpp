// conditional operator

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter the number:";
//     cin>>a;
//     if(a>=0)
//     {
//         cout<<"+ve"<<endl;
//     }
//     else
//     {
//         cout<<"-ve"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter the number:";
//     cin>>a;
//     if(a%2==0)
//     {
//         cout<<"even"<<endl;
//     }
//     else
//     {
//         cout<<"odd"<<endl;
//     }
// }
    
    
    

// if else statement can be written in a single line using conditional operator
// if -> else if ->else

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter the character:";
//     cin>>ch;
//     if (ch >='A' && ch<='Z')
//     {
//         cout<<"uppercase";

//     }else if(ch>='a' && ch<='z')
//     {
//         cout<<"lowercase";
//     }
//     else
//     {
//         cout<<"not an alphabet";

//     }
    
// ternary statements
// condition?stt1:stt2;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout<<"enter the number:";
//     cin>>a;
//     a>=0?cout<<"+ve":cout<<"-ve";
//     return 0;
// }



// loops in c++
// 1. for loop
// 2. while loop
// 3. do while loop     



// while loop

// while(condition )
// {
//     // number of time repeate based on condition
// }


// ex of while loop n


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a;
//     int i=1;
//     cout<<"enter the number:";
//     cin>>a;
//     while(i<=a)
//     {
//         cout<< i <<" ";i++;
//     }
//     cout<<endl;
//     int j=1;
//     while(j<=a)
//     {
//         cout<< j <<" ";j++;
//     }

// }


//  for loop

// for(initialization;condition;increment/decrement)
// {
//     // number of time repeate based on condition
// }



// example that sum of first n natural numbers using for loop


// #include<iostream>
// using namespace std;
// int main()
// {
//    int a,sum;
//    cin>>a;
//    sum=0;
//    for(int i=1;i<=a;i++)
//    {
//       sum+=i;
    
//    }
//    cout<<sum;
   
// }

// 1+2+3+4+5+6+7+8+9+10=55
// i



// example using break statement

// #include<iostream>
// using namespace std;
// int main()
// {
//    int a,sum;
//    cin>>a;
//    sum=0;
//    for(int i=1;i<=a;i++)
//    {
//       sum+=i;
//     if(i==5)
//     {break;}
//    }
//    cout<<"sum="<<sum<<endl;
   
// }


// example that sum of odd numbers from 1 to n using for loop

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n,sum;
//    cin>>n;
//    sum=0;
//    for(int i=0;i<=n;i++)
//    {
//       if(i%2!=0)
//       {
//          sum+=i;

//       }
//    }
//    cout<<"sum="<<sum<<endl;
// }


// example that sum of odd numbers from 1 to n using while loop
// need to understand that while loop aproch bottom up method
// but in for loop top down method

// #include<iostream>
// using namespace std;
// int main()
// {
//    int a,sum;
//    cin>>a;
//    sum=0;
//    while(a>0)
//    {
//       if(a%2!=0)
//       {
//          sum+=a;

//       }a--;
//    }
//    cout<<"sum="<<sum<<endl;
//    return 0;
// }


// do while loop

// in do while loop the statment what to do will return first in do block
// and the condition followed by if the condition is false the loop will run once


// example of do while loop


// #include<iostream>
// using namespace std;
// int main()
// {
//    int a,sum;
//    a=10;

//    do
//    {
//       cout<<"101010";
//       a++;
//    } while (a>20);
   
// }

// 


// we use i*i<=n
// 12
// 1*12
// 2*6
// 3*4
// --------
// 4*3
// 6*2
// 12*1
//


// nested loops
// loop inside a loop is called nested loop

