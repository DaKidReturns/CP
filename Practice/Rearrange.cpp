#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      vector<int> arr;
      vector<int> sorted_arr;
      vector<int> rev_arr;
      int T,N,a;
      cin>>T;
      while(T-->0)
      {
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>a;
			arr.push_back(a);
			}
		  
		sort(arr.begin(),arr.end());
		sorted_arr = arr;
		sort(arr.begin(),arr.end(),greater<int>());
		rev_arr = arr;
		arr.clear();
		for(unsigned int i=0;i<sorted_arr.size()/2;i++)
		  {
			  arr.push_back(rev_arr[i]);
			  arr.push_back(sorted_arr[i]);
			  }
		if(sorted_arr.size()%2==1)
			arr.push_back(rev_arr[rev_arr.size()/2]);
		
		for(auto p=arr.begin();p!=arr.end();++p)
			cout<<*p<<' ';
		cout<<endl;
			        sorted_arr.clear();
          rev_arr.clear();
          arr.clear();
		}
		
	
    return 0;
}
