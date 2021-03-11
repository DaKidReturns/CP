#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    double pi = 4*atan(1); int T;
    char c[8] ="%.",s[3];
    if(freopen("./input/ex1.2.3_2_input.txt","r",stdin)){
        scanf("%d\n",&T);
        while(scanf("%2[0-9]\n",&s)==1){
            strcat(c,s);
            strcat(c,"f\n");
            printf(c,pi);
            strcpy(c,"%.");
            strcpy(s,"");
        }
    }
    return 0;
}
