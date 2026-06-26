// patterns



// j=1  j=2   j=3   j=4
// 1.   2.   3.  4 i=1
// 1.   2.   3.  4 i=2
// 1.   2.   3.  4 i=3
// 1.   2.   3.  4 i=4


// 1234
// 1234
// 1234
// 1234

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
    
//     }
// }



// 1
// 12
// 123
// 1234


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }

// }



// * * * * 
// * * * * 
// * * * * 
// * * * * 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<"*"<<" ";

//         }cout<<endl;
//     }
// }



// abcd
// abcd
// abcd
// abcd

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cin>>ch;
//     for(char i='a';i<=ch;i++)
//     {
//         for(char j='a';j<=ch;j++)
//         {
//             cout<<j;

//         }cout<<endl;

//     }
// }

// or

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         char ch='a';
//         for(int j=1;j<=n;j++)
//         {
//             cout<<ch;
//             ch++;
        
        
//         }cout<<endl;
//     }
// }


// 123
// 456
// 789


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=1;  // if we declered inside  it will reset each loop
//     for(int i=1;i<=n;i++)
//     {  
//         for(int j=1;j<=n;j++)
//         {
//            cout<<num;
//            num++; 
//         }cout<<endl;
//     }
// }


// abcde
// fghij
// klmno
// pqrst
// uvwxy

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char ch='a';
//     for(int i=1;i<=n;i++)
//     {
        
//         for(int j=1;j<=n;j++)
//         {
//             cout<<ch;
//             ch++;
        
        
//         }cout<<endl;
//     }
// }


// * 
// * * 
// * * * 
// * * * * 
// * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*"<<" ";
//         }cout<<endl;
//     }
// }

// 1 
// 2 3 
// 4 5 6

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=1;
//     for (int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }cout<<endl;
//      }
// }


// 1 
// 2 2 
// 3 3 3 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
    
//     for (int i=1;i<=n;i++)
//     {  
//         for(int j=1;j<=i;j++)
//         {
//             cout<<i<<" ";
           
//         }cout<<endl;
//  }
// }



// a
// bb
// ccc
// dddd
// eeeee
// ffffff

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cin>>ch;
//     for(char i='a';i<=ch;i++)
//     {
//         for(char j='a';j<=i;j++)
//         {
//             cout<<i;

//         }cout<<endl;

//     }
// }


// 4
// a
// bb
// ccc
// dddd


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char ch='a';
//     for(int i=1;i<=n;i++)
//     {
        
//         for(int j=1;j<=i;j++)
//         {
//             cout<<ch;
//             if(j==i)
//             {
//               ch++;
//             }
//         }  
//         cout<<endl;
//     }
// }


// 4
// 1
// 12
// 123
// 1234


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }cout<<endl;
//     }
// }


// 4
// A
// BA
// CBA
// DCBA

// A   65
// B   66
// C   67
// D   68
// 'A' + 1
// 65 + 1 = 66

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++)
//     {  
//         for(int j=i;j>=1;j--)
//         {   char ch='A'+j-1;
//             cout<<ch;
//         }cout<<endl;
    
//     }
// }


// 4
// 1
// 21
// 321
// 4321

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1;i<=n;i++)
//     {
//         for(int j=i;j>=1;j--)
//         {
//             cout<< j;
//         }cout<<endl;
//     }
// }


// 9
// 111111111
//  22222222
//   3333333
//    444444
//     55555
//      6666
//       777
//        88
//         9

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";

//         }
//         for (int j=0;j<n-i;j++)
//         {
//             cout<<i+1;
//         }cout<<endl;
    
//     }
   
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for ( int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";
        
//         }
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<n-i;
//         }cout<<endl;
//     }
// }



// 3
// AAA
//  BB
//   C


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++)
//     {   
//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<ch;
            
//         }
//         ch++;
//         cout<<endl;
//     }
// }


// 5
//     1
//    121
//   12321
//  1234321
// 123454321

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++)
//     {   
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<" ";
        
//         }
//         for(int j=1;j<=i+1;j++)
//         {
//             cout<<j;
            
//         }
//         for(int j=i;j>=1;j--)
//         {
//             cout<<j;
//         }
//         cout<<endl;
// }
// }


// 4
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<" ";

//         }
//         cout<<"*";
//         if(i!=0)
//         {
//             for(int j=0;j<2*i-1;j++)
//             {
//                 cout<<" ";
            
//             }
//             cout<<"*";
//         }cout<<endl;
//     }   
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=n-2)
//         {
//             for(int j=0;j<2*(n-i)-5;j++)
//             {
//                 cout<<" ";
            
//             }cout<<"*";
//         }cout<<endl;
//     }
// }
