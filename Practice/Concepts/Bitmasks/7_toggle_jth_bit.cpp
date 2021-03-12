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
    std::cout<<std::endl<<"Enter the position of the value to toggle :";
    std::cin>>j;
    
    n = n ^(1<<j);

    std::cout<<std::endl<<"The New Value: ";
    itobit(n,binary);
    dispBinary(binary);
    std::cout<< " = "<<n<<std::endl;

    return 0;
}
