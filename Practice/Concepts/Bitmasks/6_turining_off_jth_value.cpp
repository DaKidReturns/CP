#include<iostream>
#include"1_itobit.cpp"

int main(){
    std::cout<<"Enter a number: ";
    int n;
    std::cin>>n;
    std::cout<<"Binary Representation of "<<n<<" :";
    int binary[32];
    itobit(n,binary);
    dispBinary(binary);
    
    int j;
    std::cout<<std::endl<<"Enter the position of the value to turn off :";
    std::cin>>j;
    
    n = n & ~(1<<j);

    std::cout<<std::endl<<"The New Value: ";
    itobit(n,binary);
    dispBinary(binary);

    unsigned int a = 0;
    unsigned int b = ~0;
    b = b & ~(1<<31);
    std::cout<<"\n\nMax Value of int is: "<<b<<std::endl;

    return 0;
}
