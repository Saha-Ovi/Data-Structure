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
        for(int i=0;i<s.length();i++)
        {
            // 
            if(st.top()!=s[i])
            {
                st.pop();
            }
            else
            {
                // st.push(s[i]);
            }
        }
        
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   } 
  return 0;
}