#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
        string s;
        cin>>s;
        stack<string>st;
        st.push(s);
        queue<string>q;
        q.push(s);
        while(!st.empty())
        {
            if(st.top()!=q.front())
            {
                st.pop();
                q.pop();
            }
            

        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   } 
  return 0;
}