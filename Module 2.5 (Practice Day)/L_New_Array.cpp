#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n+n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        c[i]=b[i]; //0 1 fill up c[i]
    }
    int i=n;
    for(int k=0;k<n;k++)
    {
        c[i]=a[k];
        i++;
    }
    for(int i=0;i<(n+n);i++)
    {
       cout<<c[i]<<" ";
    }
  return 0;
}