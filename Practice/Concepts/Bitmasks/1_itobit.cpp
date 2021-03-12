#include<iostream>

enum Compliment { ONE,TWO};

void itobit(int n, int bitmask[], int size=32,int c=1){ //c = 1 for 2's complimtn and 0 for 1's compliment
    for(int i=0;i<32;i++){
        bitmask[i] = 0;
    }
    int top =32;
    if(n<0){
        bitmask[0] = 1;
        n = -n;
    }
    while(n!=0){
        top --;
        bitmask[top] = n%2;
        n=n/2;
    }
}
void dispBinary(int binary[]){
    for(int i=0;i<32;i++){
        std::cout<<binary[i];  
    }
}
