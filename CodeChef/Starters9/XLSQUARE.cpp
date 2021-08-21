#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;


int main(){
    int t;
    scanf("%d", &t);
    while(t-->0){
        int a, n;
        scanf("%d %d",&n,&a);
        printf("%d\n",((int)sqrt((double)n))*a);
    }

    return 0;
}
