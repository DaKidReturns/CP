#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	string s;
	int t;
	cin>>t;
	while(t-->0){
		cin>>s;
		if(s.length()>10){
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
			
		}
		else
		{
			cout<<s<<endl;
			}
	
	}
	return 0;
}
