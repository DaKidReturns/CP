
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N;
    cin>>T ;
    while(T-->0)
    {
        cin>>N;
        i = N;
        pow=(int)(log(N)/log(5));
        for(int j=pow;j>=1;j--)
            i=i-((int)(N/pow(5,j)));
        cout<<5*i<<endl;
    }
    return 0;
}
