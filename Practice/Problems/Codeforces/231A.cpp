// Problem statement : codeforces.com/problemset/problem/231/A

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int ,int> ii;
typedef vector<ii>     vii;
typedef vector<int>    vi;

#define INF 1000000000

int main(int argc, char **argsv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; //0<n<10000;
    int i;
    int conf;
    int impd = 0;
    cin>>n;

    while(n--)
    {
        conf = 0;
        for(int j=0;j<3;j++)
        {
            cin>>i;
            if(i == 1)
                conf++;
        }
        if(conf>=2)
            impd++; 
    }
    cout<<impd<<endl;

}

