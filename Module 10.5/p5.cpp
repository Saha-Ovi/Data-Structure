#include<bits/stdc++.h>
using namespace std;
int main()
{  
   list<int> mylist;
   int val;
   while(cin>>val)
   {
    if(val== -1)
    {
        break;
    }
        mylist.push_back(val);
   }
   mylist.sort();
   for(int value : mylist)
   {
        cout<<value<<" ";
   }
  return 0;
}