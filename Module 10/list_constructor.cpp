#include<bits/stdc++.h>
using namespace std;
int main()
{  

  // =============================== ** Way 1 ** ====================================
//    list<int>mylist;
//    cout<<mylist.size();

// =============================== ** Way 2 ** ====================================

// list<int>mylist(5);
// for(auto it=mylist.begin();it!=mylist.end();it++)
// {
//     cout<<*it<<" ";
// }


// =============================== ** Way 3 ** ====================================

// list<int>mylist(5,3);
// for(auto it=mylist.begin();it!=mylist.end();it++)
// {
//     cout<<*it<<" ";
// }
// =============================== ** Way 4 ** ====================================

// list<int>list2={10,20,30,40,50};
// list<int>mylist(list2);


// for(auto it=mylist.begin();it!=mylist.end();it++)
// {
//     cout<<*it<<" ";
// }

// =============================== ** Way 5 ** ====================================

int N[5]={10,20,30,40,50};
list<int>mylist(N,N+5);

// ========================== Print Way 1 ==================================
// for(auto it=mylist.begin();it!=mylist.end();it++)
// {
//     cout<<*it<<" ";
// }

// ==================================== Print Way 2 =======================================

for(int val : mylist)
{
   cout<<val<<" ";
}
  return 0;
}