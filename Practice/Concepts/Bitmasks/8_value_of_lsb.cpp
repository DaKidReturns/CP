#include<iostream>
#include"1_itobit.cpp"
#define nl cout<<"\n"

using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int binary[32];
    itobit(n,binary);

    cout<<"\nBinary reperesentation of "<<n<<" is : ";
    dispBinary(binary);
    nl;

    int j = n & (-n); //Since the representation is 2's complement
    cout<<"The value of the position with least significant 1 is: "<<j;
    nl;
    return 0;
}
