#include<bits/stdc++.h>
using namespace std;
int main()
{  
  //                          1

  //  list<int> mylist = {10, 20, 30, 40, 50, 20, 70, 60, 20};
  //  mylist.remove(20);
  //  for(int val: mylist)
  //    {
  //     cout<<val<<" ";

  //    } 
//                              2

//  list<int> mylist = {30,60,10,80,40,70,20,50};
//  mylist.sort();
//  for(int val: mylist)
//      {
//       cout<<val<<" ";

//      }
//      cout<<endl;

//    mylist.sort(greater<int>());
//  for(int val: mylist)
//      {
//       cout<<val<<" ";

//      } 
//                                3

     list<int> mylist = {10, 20, 30, 40, 50, 20, 70, 60, 20};
     mylist.sort();
     mylist.unique();
     for(int val: mylist)
     {
      cout<<val<<" ";

     } 
     cout<<endl;
     mylist.reverse();
     
      for(int val: mylist)
     {
      cout<<val<<" ";

     } 

      


  return 0;
}