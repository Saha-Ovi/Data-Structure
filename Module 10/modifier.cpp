#include <bits/stdc++.h>
using namespace std;
int main()
{
   //                1

   //  list<int>mylist={10,20,30,40,50};

   //   list<int> mylist=mylist2;

   //                  2

   //  list<int>mylist2={1,2,3};
   // list<int>mylist;
   // mylist.assign(mylist2.begin(),mylist2.end());
   // for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }

   //                 3

   // list<int>mylist={10,20,30,40,50};
   // mylist.push_back(60);
   // mylist.push_front(1);
   // mylist.pop_front();
   // for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }
   //    cout<<endl;
   // mylist.pop_back();

   //    for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }
   //                      4

   // list<int>mylist={10,20,30,40,50};

   //                      single insert & erase

   // mylist.insert(next(mylist.begin(),2),25);
   //  for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }
   //    cout<<endl;
   // mylist.erase(next(mylist.begin(),2));

   //  for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }
   //                            Multiple insert & Erase

   // vector<int> v ={22,24,26,28};
   // mylist.insert(next(mylist.begin(),2),v.begin(),v.end());

   //   for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }
   //    cout<<endl;
   //    mylist.erase(next(mylist.begin(),2),next(mylist.begin(),6));
   //    for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }

   //                             5

   // list<int>mylist={10,20,30,40,50,20,70,60,20};
   // replace(mylist.begin(),mylist.end(),20,25);
   //    for(int val: mylist)
   //    {
   //     cout<<val<<" ";

   //    }
   list<int> mylist = {10, 20, 30, 40, 50, 20, 70, 60, 20};

   auto it = find(mylist.begin(), mylist.end(), 65);
   if (it == mylist.end())
   {
      cout << "Not Found";
   }
   else
   {
      cout << "Found";
   }

   return 0;
}