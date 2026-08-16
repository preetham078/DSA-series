// array is a group of data
// -> same type
// -> continous in memory and linehhguc
// initialized with a size
// ex int array[5] = {1, 2, 3, 4, 5}; // array of size 5

// example of array in C++
// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[5]={10,20,30,40,50};
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<marks[4]<<endl;
// }


// example 2 loops on arrays


// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cin>>size;
//     int marks[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>marks[i];
//     }
//      for(int i=0;i<size;i++)
//     {
//         cout<<"marks "<<i<<"= "<<marks[i]<<endl;
//     }
    

// }
// find smallest and largest element in an array
 #include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
}

