#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxsumwindow(vector<int>& nums,int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+nums[i];
    }
    int maxsum=sum;
    for(int right=k;right<nums.size();right++)
    {
        sum=sum-nums[right-k]+nums[right];
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main()
{
    vector<int> num={1,2,3,4,5};
    int k=3;
    int a=maxsumwindow(num,k);
    cout<<a;
    return 0;
}