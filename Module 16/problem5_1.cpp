#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int test;
   cin>>test;
   for(int i=0;i<test;i++)
   {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;

        for(char c : s)
        {
            if(st.empty())
            {
                st.push(c);

            }
            else
            {
               if(!st.empty() && ((c=='R' && st.top()=='B')||(c=='B' && st.top()=='R')))
            {
               st.pop();
               if(st.top()=='G')
               {
                 st.pop();
               }
               else 
               {
                 st.push('G');
               }
            }
            else if(!st.empty() && ((c=='R' && st.top()=='G')||(c=='G' && st.top()=='R')))
            {
               st.pop();
               if(st.top()=='Y')
               {
                 st.pop();
               }
               else 
               {
                 st.push('Y');
               }
            }
            else if(!st.empty() && ((c=='B' && st.top()=='G') ||(c=='G' && st.top()=='B')))
            {
               st.pop();
               if(st.top()=='C')
               {
                 st.pop();
               }
               else 
               {
                 st.push('C');
               }
            }
            }
        }
        stack<char>sst;
        while(!st.empty())
        {
           sst.push(st.top());
           st.pop();
        }
         while(!sst.empty())
        {
           cout<<sst.top()<<endl;
           sst.pop();
           
        }
       
   }
   

  return 0;
}