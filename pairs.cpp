// #include <iostream>
// using namespace std;

// int main()
// {   
//     pair<int,int> p={10,20};
//     cout<<p.first<<" "<<p.second;
   
// }

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{   
    vector<pair<int,int>> arr;
    arr.push_back({2,0});
    arr.push_back({1,2});
    arr.push_back({3,1});
    // cout<<arr.begin()->first;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }


   
}

