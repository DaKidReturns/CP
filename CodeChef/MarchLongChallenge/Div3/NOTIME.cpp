#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,H,x;
    scanf("%d %d %d",&N,&H,&x);
    int t;
    int flag=0;
    for(int i=0;i<N;i++){
        scanf("%d",&t);
        if(t+x>=H) flag=1;
    }
    if(flag == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
