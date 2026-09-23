#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution
{
public:

	int maxprofitt(vector<int>& arr)
	{
		int minarr=arr[0];
		int maxprofit=0;
		for(int i=1; i<arr.size(); i++)
		{
			minarr=min(minarr,arr[i]);
			int profit=arr[i]-minarr;
			maxprofit=max(maxprofit,profit);

		}
		return maxprofit;
	}
};
int main()
{	solution s;
	vector<int> a= {7,1,5,10,6,4};
	int b=s.maxprofitt(a);
	cout<<b;
	return 0;
}