#include<iostream>
#include"1_itobit.cpp"

int main(){
    int binary[32];
    int n,j;
    std::cout<<"Enter a number :";
    std::cin>>n;

    std::cout<<"The binary representation of the number "<<n<<" is ";
    itobit(n,binary);
    dispBinary(binary);
    std::cout<<std::endl;

    std::cout<<"Enter the position you want to change to one: ";
    std::cin>> j;
    n = n | (1<<j);
    
    std::cout<<"The binary representation of the changed number "<<n<<" is ";
    itobit(n,binary);
    dispBinary(binary);
    std::cout<<std::endl;
    
    std::cout<<"Enter the position you want to change to zero: ";
    std::cin>> j;
    n = n & (1<<j);

    std::cout<<"The binary representation of the changed number "<<n<<" is ";
    itobit(n,binary);
    dispBinary(binary);
    std::cout<<std::endl;
}
