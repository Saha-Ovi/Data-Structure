#include<bits/stdc++.h>
using namespace std;
int main()
{  
   list<int>mylist={10,20,30,40,50}; 
//    cout<<mylist.size();
//    cout<<mylist.max_size();
//    mylist.clear();
mylist.resize(2);
mylist.resize(7,100);
   for(int val: mylist)
   {
    cout<<val<<" ";

   }
  return 0;
}