// // #include<iostream>
// // using namespace std;

// // int main(){
    
// //     int arr[10]={1,2,3,4,5};
    
   
// //     for(int i=0;i<10;i++){
// //         cout<<arr[i]<<",";

// //     }
// //     cout<<endl;
// //     cout<<arr[4];
// //     int n,p;
    


    
    


// // }


// //to find the position of an element in an array
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int arr[10]={1,2,3,4,5};
// //     cout<<"Enter the element to be searched: ";
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<10;i++)
// //     {
// //         if(n ==arr[i])
// //     {
// //         cout<<"Element found at position: "<<i<<endl;
// //     }
// //     }
// //     int m,p;
// //     cin>>m>>p;
// //     for(int i=0;i<10;i++)
// //     {
// //         if(p==arr[i])
// //         {
// //             arr[i]=m;
// //             cout<<"Element replaced at position: "<<i<<endl;
// //         }
// //     }
// //     for(int i=0;i<10;i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }

    

// // }



// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int arr[10]={1,2,3,4,5};
// //     cout<<"Enter the position to be inserted:";
// //     int pos;
// //     cin>>pos;
// //     cout<<"Enter the element to be inserted:";
// //     int ele;
// //     cin>>ele;
// //     for(int i=5-1;i>=pos;i--)
// // {
// //     arr[i+1]=arr[i];

// // }
// // arr[pos]=ele;
// // for(int i=0;i<10;i++)
// // {
// //     cout<<arr[i]<<" ";
// // }
// // }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     cout<<"Enter the position to be deleated";
//     int pos;
//     cin>>pos;
    
//     for(int i=pos;i<=5-1;i++)
// {
//     arr[i]=arr[i+1];

// }

// for(int i=0;i<5-1;i++)
// {
//     cout<<arr[i]<<" ";
// }
// }



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";


}
    cout<<"enter the position of elementto be deleated";
    int pos;
    cin>>pos;
    for(int i=pos;i<n-1;i++)
{
    arr[i]=arr[i+1];

}
n--;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";


}
cout<<"enter the position of element to be inserted";
int po;
int ele;
cin>>ele>>po;
for(int i=n-1;i>=pos;i--)
{
    arr[i+1]=arr[i];

}
arr[pos]=ele;
n++;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";

}
}
