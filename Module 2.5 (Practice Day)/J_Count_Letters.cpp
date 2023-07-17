#include<bits/stdc++.h>
using namespace std;
int main()
{  
    char s;
    int count[26]={0};
  while(cin>>s)
  {
    count[s-'a']++;

  }
  for(char i='a';i<='z';i++)
  {
        if(count[i-'a']>0)
        {
            cout<<i<<" "<<":"<<" "<<count[i-'a']<<endl;
        }
  }
  
  return 0;
}