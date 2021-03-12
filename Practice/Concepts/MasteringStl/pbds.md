PBDS (Policy Based Data Structure)
===================================

### Introduction
It is a special data structure whixh answers the following things 

1.  `find_by_order(k)` -> returns the pointer to the kth largest element(0th largest onwards)  
   
    >0th is the smallest element  
    >
    > Eg: in an array of [1,2,3,4]  
    > find\_by\_order(0) = 1  
    > find\_by\_order(2) = 3  
    > find\_by\_order(3) = 4  

2.  `order_by_key(an element x)` : returns how many elements are less than x (a number)
    
Both of the above queries are in O(log n), since it is implemented using a balanced 
binary tree

---
This PBDS stores data like set, that has only unique values.
> If you add 1 two times there will be only one 1 and
Hence there will be only unique data elemets(could be overcomed by pair)

Set is different from PBDS, set is also contains elements in a sorted form but 
doesn't provide the `find_by_order` and `order_by_key` funtions.  
PBDS are a super set of sets.


### How to store multiple values
We will make a pair `(element, index)`  

> [1,1,2,2,3]
> can be writtern as  
> [<1,0>,<1,1>,...]

### Including PBDS in c++
`#include<ext/pb_ds/assoc_container.hpp>`  
This is not defined under the standard namespace so we have to use another namespace
namely `__gnu_pbds` add the code

### Using PBDS

Internally this is implemented using tree we have to specify it (`rb_tree_tag` for using redblack trees)  
We also need to specify the update policy of the node in the tree which we specified (*check this out*) using the argument `tree_order_statistics_node_update`

So, finally a declaration will look like this  
```c++
    tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > policyds1; // we aren't mappint int to anything  
```

This is little long so we will use a `typedef`  
```c++
    typedef tree<int,null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds; 
```
And initialize by using `pbds arr;`
