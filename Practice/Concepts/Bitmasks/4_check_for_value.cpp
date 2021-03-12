#include<iostream>
#include"1_itobit.cpp"

int main(){
    int binary[32];
    int n,j;

    std::cout<<"Enter a number ";
    std::cin>>n;
    std::cout<<"Enter the position to check for: ";
    std::cin>>j;

    int f = n & (1<<j);  // if the jth item is 1 then there will be some value for f

    std::cout<<"The value of "<<j<<" bit is: "<< f <<std::endl;
    std::cout<<std::endl<<"The binary rep. of "<<n<< " is:";
    itobit(n,binary);
    dispBinary(binary);
    std::cout<<std::endl;

    //std::cout<<(1<<0)<<std::endl;
    return 0;
}
