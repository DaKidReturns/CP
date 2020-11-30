#include<cstdio>

typedef unsigned long long int ulli;

int ncr(ulli a, ulli b){
    ulli i;
    ulli p =a;
    if(a==b) return 1;
    for(i=a-1;i>(a-b);--i){
        printf("value of a is %lli\n",p);
        p=p*i;
    }
    for(i=b;i>1;--i )
        p=p/i;
    return p;
}
/*
ulli exp(ulli a,ulli b){
    ulli i;
    if(b==0){return 1;}
    else{
        for(i=1;i<b;++i) a*=a;
        return a;
    }
}*/
int main(){
    int T;
    ulli a,b,result;
    scanf("%d%*c",&T);
    while(T-->0){
        scanf("%lli%*c%lli%*c",&a,&b);
        //printf("vlaue of a and b is %lli %lli\n",a,b);
        result = ncr(a-1,b-1);
        printf("%lli\n",result);
    }
    return 0;
}
