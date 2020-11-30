#include<cstdio>
#include<cstdlib>


int main()
{
	int w;
	scanf("%d",&w);
	if(w%2==0)
		if(w==2)
			printf("NO");
		else
			printf("YES");
	else
		printf("NO");
	return 0;
	
	}
