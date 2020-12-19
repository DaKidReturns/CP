// Problem statement : codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>

using namespace std;

typedef unsigned int  ui;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int ,int> ii;
typedef vector<ii>     vii;
typedef vector<int>    vi;

#define INF 1000000000
#define MOD 1000000007

int main(int argc, char **argsv)
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);

    int T;
    int dest;
    int jumpPoint;
    double jumps,intpart,fractpart;
    int totJump;

    cin>>T;

    while(T--)
    {
        cin>>dest;
        jumps = (sqrt(1+8*dest) -1)/2;
        fractpart = modf(jumps,&intpart);
    
        if(jumps+fractpart == jumps)
        {
            //this implies fractional part is 0
            totJump = (int)intpart;
        }

        else
        {
            totJump = (int)intpart+1;
            jumpPoint = (int)((totJump*totJump+totJump)/2);
//            cout<<"Couldn't reach the jumpp point so jumped to "<< jumpPoint<<"\n";

            if(dest == jumpPoint - 1)
            {
 //              cout<<"Total Jump = "<<totJump<<"\n";
               totJump++;
            }
            else
            {
                int k = jumpPoint-dest-1;
                //totJump -=1;
            }
        }
  //          cout<<"Final amount of Jumps to reach "<<dest<< " = "<<totJump<<"\n";
            cout<<totJump<<"\n";

    }

}
