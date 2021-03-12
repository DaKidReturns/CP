//Can be used to inversion count, kth order statistics
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds; // we aren't mappint int to anythin

int main()
{
    pbds arr;// This is a pointer to the pbds not the actual Data Structre

    for(int i=0;i<10;i++)
    {
        arr.insert(i);
    }
    cout<<*arr.find_by_order(3)<<endl;
    cout<<*arr.find_by_order(20)<<endl;
    cout<<"The number of integers less than 4: "<<*arr.order_by_key(4)<<endl;
    
}
