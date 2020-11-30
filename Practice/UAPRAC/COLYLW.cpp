/* This is a problem showing the application of binary search
 * 
 * Problem statement: 3xn floor is to be colored by tiles of 3 different 
 * colors red, blue and green. Given the number of red blue and green tiles
 * find the maximum number of columns of the floor that can be colored given
 * that each column must contain atleast 1 red and 1 blue
 *
 * Input: T+1 lines where T is the number of test cases and 
 * T lines of 4 spaced integers which is the values of n,r,g,b resp.
 *
 * */


#include<bits/stdc++.h>
#include<iostream>

using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;


int tilesFilled(ulli,ulli,ulli,ulli);
bool goodValue(ulli n,ulli r,ulli b, ulli g);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;   
    ulli n, r, b,g,result;
    cin>>T;
    while(T--)
    {
        cin>>n>>r>>g>>b; 
        result = tilesFilled(n,r,b,g);
        cout<<result<<"\n";
    }
}

int tilesFilled(ulli n,ulli r,ulli b,ulli g)
{
    ulli minC = 0; //0 is the minimum number of rows that can be filled
    ulli maxC = min(n,min(r,b)); // since there is atleast 1 read and 1 blue tile compulsory we will only fill that many number of columns
    //minC is the lower bound and maxC is the upper bound
    ulli mid;
    ulli res=0;;

    while(minC<=maxC)
    {
        mid = (minC+maxC)/2;
        if(goodValue(mid,r,b,g))
        {
            res = mid;
            minC =mid+1;
        }
        else
        {
            maxC = mid-1;
        }
    }
    return res;
}

bool goodValue(ulli n,ulli r,ulli b, ulli g)
{
    r = r-n;
    b = b-n;
    //after using n number of tiles of red and blue we need n number of tiles to fill the rest of the spaces
    return r+b+g>n;
}
