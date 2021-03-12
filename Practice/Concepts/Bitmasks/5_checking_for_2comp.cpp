//This is a fun little program to check if the binary representation is in
//2's compliment

#include<iostream>
#include"1_itobit.cpp"

int main(){
    int n;

    std::cout<<"Enter a number: ";
    std::cin>>n;
    
    int t = n & (-n);
    /* The idea is 1. we know that the representation is in binary, so there is two possibilities
     * 1. 1's complement and
     * 2. 2's complement
     *
     * In binary 1's complement is inverting all the bits, so the result of the and must be 0
     * In 2's complement all the bits after the first 1 is inverted. so the result of the and will be the first occurace of
     * 1 from the lsb.
     * */

    if(t){
        std::cout<<"The number representation is 2's compliment"<<std::endl;
    }
    else{
        std::cout<<"The number representation is 1's compliment"<<std::endl;
    }

    return 0;
}
