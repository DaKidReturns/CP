#include<iostream>

using namespace std;
int main(){
    int n;
    
    while(scanf("%d",&n)==1){
        int bytes[4];
        int bitmask[32];

        bytes[0] = n&255;
        bytes[1] = n&65280;
        bytes[2] = n&16711680;
        bytes[3] = n&4278190080;

        int a = (bytes[0] << 24)|(bytes[1]<<8)|(bytes[2]>>8);
        if(n<0){
            int r=-1;
            r = r<<8;
            a = a | (r ^ bytes[3]>>24);
        }
        else{
            a = a | (bytes[3]>>24);
        }
        printf("%d converts to %d\n",n,a);
    }
}
