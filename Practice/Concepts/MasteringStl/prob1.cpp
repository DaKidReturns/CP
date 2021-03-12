/*  ZERO ONE QUERY
 * You have an array of all 0. Size of array will be n
 * then there will be q queries and each of them there will be 
 * 2 numbers l and r and the type as well
 *
 * for type 1: increase all values from index l to r by 1
 *
 * N<= 10^7
 * Q<= 10^6
 *
 * at last print the array
 */

/* [0,0,0,0,0]
 * three queries 
 *  2,4 
 *  1,2,
 *  3,4
 *
 *  start from index 2 and end at 4 increasing by 1
 *  [0,0,1,1,1]
 *  then in the second one
 *  [0,1,2,1,1]
 *  then in the third one 
 *  [0,1,2,2,2]
 *
 *  Instead of putting it in a for loop
 *  process the qurey first and create the answer at the very end to reduce the
 *  time complexity to O(Q+N)
 *
 *  Differenece array 
 *  arr[L]++ ->there was some query with starting point at L
 *  arr[R+1]-- -> there was some query ending at the point R
 *  
 *  we will then take the cumulative sum!!!!! do and check
 *
 * */


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(int argc,char const *argv[])
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    // int *arr = new int[n](); //array is initialized with zeros

    int Q,l,r;
    int cu=0; //contains the cumulative sum;
    cin>>Q;
    while(Q--)
    {
        cin>>l>>r; //Each query O(1)
        if(l<n){
            arr[l]++;
            if(r+1<n){
                arr[r+1]--;
            }
        }
    }

    for_each(arr.begin(),arr.end(),[&cu](int i)
            {
                cu = cu+i;
                cout<<cu<<' ';
            }
            );
    cout<<"\n";
}
