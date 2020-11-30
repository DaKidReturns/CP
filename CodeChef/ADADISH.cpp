#include<iostream>

using namespace std;

int main()
{
	int T,N,x,j,i;
	int C[]={0,0,0,0,0};
	int val;
	int time;
	int times[5]={0,0,0,0,0};
	
	cin>>T;
	while(T-->0)
	{
		//Set the times and C to 0 0 0 0 0
		for(x=0;x<5;x++){
			C[x]=0;
			times[x]=0;
		}
		
		//Get the number of Dishes
		cin>>N;
		i=N;
		time = 0;
		j=0;

		while(i>0)
			{
				cin>>val;
				if(C[val-1] ==0)
					C[val-1] =1;
				else
				{
					C[val-1]=0;
					time+=val;
					N=N-2;
				}
				i--;
			}
		for(x=4;x>=0;x--)
				{
					if(C[x]!=0)
					{
						times[j] = x+1;
						j++;
					}
				}
			
		if(N==0)
		{
				cout<<time<<endl;
		}
		else if(N==1)
		{
			cout<<time+times[0]<<endl; //if there is only one dish then the minimum time taken is to cook it
		}
		else if(N==2)
		{
			cout<<time+times[0]<<endl;
		}
		
		else if(N==3)
		{
			if(times[2]==1)
			{
					cout<<times[0]<<endl;
			}
			else{
			cout<<times[1]+times[2]<<endl;
			}
		}
		
		else if(N==4)
		{
			//all are unique
			cout<<times[1]+times[2]<<endl
			;
		}
	}
	
}
