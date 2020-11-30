#include<bits/stdc++>

ios::sync_with_stdio(false);

using namespace std;

int main()
{
	int T,N,a,k;
	vector<int> arr(1); //since there will be atleast minimum of one guest
	vector<int> dp(1);
	map<int, int> famList;
	cin>>T;
	while(T-->0)
	{
		arr.clear(arr.begin()+1,arr.end());
		dp.clear(dp.begin()+1,dp.end());
		
		cin>>N;
		cin>>k;
		
		for(int i=0;i<N;i++)
		{
			cin>>a;
			arr.push_back(a);
		}
		
		// N has the total number of people in the wedding
		
		for(int i=0;i<N;i++)
		{
			
			for(int j = i;j>=0;j++)
			{
				
			}
		}
	}
}