#include<cstdio>

using namespace std;

int main(){
    int T;
    scanf("%d\n",&T);
    long long int a,b;

    while(scanf("%ld %ld\n",&a,&b)==2 && T--){
        if(a>b)
            printf(">\n");
        else if(b>a)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}
