#include<bits/stdc++.h>
using namespace std;
int main()
{  
   stack<int>st,sst;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      st.push(x);
   }
    while(!st.empty())
    {
        sst.push(st.top());
        st.pop();
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<sst.top()<<" ";
    //     sst.pop();
    // }
    // right way of printing
    while(!sst.empty())
   {
        cout<<sst.top()<<" ";
        sst.pop();
   }
    
  return 0;
}