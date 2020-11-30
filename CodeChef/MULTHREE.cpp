#include<iostream>

typedef  long long int ulli;


using namespace std;

int main(){
    ulli k,sum,c;
    int d0,d1,d2,T,s,x;
    cin>>T;
    while(T-->0){
        cin>>k>>d0>>d1;
        d2=(d1+d0)%10;
        x=0;
        c = (k-3)%4;
        if(k>=7){
            s = 2*(d1+d0)%10+4*(d1+d0)%10+8*(d1+d0)%10+6*(d1+d0)%10;
            if(c==0) x=0;
            else{
                if(c==1){
                    x = 2*(d1+d0)%10;
                }
                if(c==2){
                    x = 2*(d1+d0)%10 + 4*(d1+d0)%10;
                }
                if(c==3){
                    x = 2*(d1+d0)%10 + 4*(d1+d0)%10 + 8*(d0+d1)%10;
                }
            }
            sum = (d1+d0)+d2+((k-3)/4)*s+x;
        }
        else{
            sum=d1+d0+d2;
            while(k-->2){
                sum+=(d1+d0)%10;
            }
        }
        if(sum%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}
