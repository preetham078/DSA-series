// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n=10;
// //     int arr[n];
// //     cin>>n;
// //     for(int i=0;i<n;i++)
// //     {
// //         cin>>arr[i];
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }
// //     int val;
// //     cin>>val;
// //     for(int i=0;i<n;i++)
// //     {
// //         if(arr[i]==val)
// //         {
// //             cout<<i;
// //         }
// //     }


// // }


// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int arr[n];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     int val,ind;
//     cin>>val>>ind;
//     for(int i=n-1;i<ind;i++)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[ind]=val;
//     n++;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"enter the position of elementto be deleated";
//     int ele;
//     cin>>ele;
//     for(int i=ele;i<n-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

    


// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int arr[n];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     int max=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }
#include <iostream>
using namespace std;
void change(int &x)
{
    x=100;

}
int main()
{
    int a=10;
    change(a);
    cout<<a;
}