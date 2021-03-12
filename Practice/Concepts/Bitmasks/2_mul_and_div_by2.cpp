#include<iostream>

int main(){
    int n;
    std::cout<<"Enter an intege: ";
    std::cin>>n;
    int p = n<<1;
    int q = n>>1;
    std::cout<<n<<" * 2 = "<< p<<std::endl;
    std::cout<<n<<" / 2 = "<< q<<std::endl;

    return 0;
}
