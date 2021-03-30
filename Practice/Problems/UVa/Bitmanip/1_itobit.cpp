#include<iostream>

enum Compliment { ONE,TWO};

void itobit(int a, int bitmask[], int size=32,int c=1){ //c = 1 for 2's complimtn and 0 for 1's compliment
    for(int i=0;i<32;i++){
        bitmask[i] = 0;
    }

    int top =32;
    int n=int(a);
    if(a<0){
        n = -a;
    }

    while(n!=0){
        top --;
        bitmask[top] = n%2;
        n=n/2;
    }

    if(a<0){
        bool flag = 0;
        for(int i=31;i>=0;i--){
            if(flag == 0){
                if(bitmask[i]==1){
                    flag = 1;
                }
            }
            else{
                if(bitmask[i] ==0){ //  (bitmask[i] == 1? 0:1);
                    bitmask[i] = 1;
                }
                else {
                    bitmask[i] = 0;
                
                }
            }
        }
    }

}
void dispBinary(int binary[]){
    for(int i=0;i<32;i++){
        std::cout<<binary[i];  
    }
}
