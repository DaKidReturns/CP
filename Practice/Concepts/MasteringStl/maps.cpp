/* Ordered and unordered maps
 *
 * */

#include<iostream>
#include<maps> // for ordered maps
#include<unordered_maps> //for unordered maps

using namespace std;

int main()
{
    map<int, float> mp;
    mp[1] = 3.4;
    mp[3] = 7.2;
    mp[0] = 54.3;

    unordered_map<int, float> ump;
    ump[1] =34.5;
    ump[0] = 5.98;

    if(ump.find(2)==ump.end) //returns an iterator to the 
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found "<<ump.find(2);
    }
    mp.insert({2,3.45});

    //looping through the map
    cout<<"The Result of the ordered map ";
    for(auto it = mp.begin();it!=mp.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<"The Result of the un-ordered map ";
    for(auto it = ump.begin();it!=ump.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
