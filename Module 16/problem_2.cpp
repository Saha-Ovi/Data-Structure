#include<bits/stdc++.h>
using namespace std;
int main()
{  
   stack<int> st;
   int n,m;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
        int x;
        cin>>x;
        st.push(x);
   }
   queue<int> q;
    for(int i=0;i<m;i++)
   {
        int x;
        cin>>x;
        q.push(x);
   }

   int flag=1;

   if(st.size()==q.size())
   {
        while(!st.empty())
        {
            if(st.top()!=q.front())
            {
                flag=0;
            }
            st.pop();
            q.pop();
        }
   }
   else
   {
        flag=0;
   }
   if(flag==1) cout<<"YES";
   else cout<<"NO";

  return 0;
}