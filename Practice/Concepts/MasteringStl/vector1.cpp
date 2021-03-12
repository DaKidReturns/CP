#include<iostream>
#include<vector>

int main(int argc, char **argv)
{
    int n;
    std::vector<int> arr(1,0);
    std::cin>>n;
    std::cout<<"Growing the array in runtime";
    std::cout<<"\nThe size of the array is "<<arr.size()<<std::endl;
    for(int i=1;i<n;i++)
    {
        arr.push_back(i);
    }
    std::cout<<"The size of the array now is "<<arr.size()<<std::endl;
    std::cout<<"The element of the array is ";
    for(int i=0;i<arr.size();i++)
        std::cout<<arr[i];
    return 0;
}
