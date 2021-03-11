#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int N, target;
double dist[20][20], memo[1<<16]; //1<<16 = 2^16 note that max n=8

double matching(int bitmask)  //DP state = bitmask
{               //We initialize meme with -1 in the main function
    if (memo[bitmask] > -0.5) //This state has been computed before
        return memo[bitmask];    //Simply look up the memo table
    if(bitmask == target)       //all Students are already matched
        return memo[bitmask] = 0; //The cost is 0

    double ans = 2000000000.0;  //Intialize with a large number
    int p1,p2;
    for(p1=0;p1< 2 * N; p1++)
        if(!(bitmask & (1<<p2)))
            break;

    for(p2=p1+1;p2<2*N;p2++)
        if(!(bitmask & (1<< p2)))
            ans = min(
                    ans,dist[p1][p2]+matching(bitmask | (1<<p1) | (1<<p2)));
    return memo[bitmask] = ans;
}


int main(){
    int i,j,caseNo=1, x[20],y[20];

    //freopen("10911.txt","r",stdin);

    while(scanf("%d",&N),N)
    {
        for (i = 0;i<2*N;i++)
        {
            scanf("%*s %d %d",&x[i],&y[i]);
        }
        for(i=0;i<2*N;i++)
            for(j=i+1;j<2*N;j++)
                dist[i][j] = dist[j][i] = hypot(x[i]-x[j],y[i]-y[j]);

        for(i = 0;i<(1<<16); i++) memo[i]=-1;
        target = (1<<(2*N)) -1;
        printf("Case %d: %.21f\n",caseNo++,matching(0));
    }
    return 0;
}
