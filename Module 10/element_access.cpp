#include<bits/stdc++.h>
using namespace std;
int main()
{  
    list<int> mylist = {10, 20 ,30 ,40, 50, 60, 70}; 
  
   cout<<mylist.front()<<endl;
   cout<<mylist.back()<<endl;

   //next address back kore or hold kore thats why dereference korte hobe cout er somoy
   
   cout<<*next(mylist.begin(),3)<<endl;
   

  return 0;
}