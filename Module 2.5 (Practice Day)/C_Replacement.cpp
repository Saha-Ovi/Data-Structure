#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;

    vector<int>a(n);
    //value input
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // checking postive & negative value for replace

    for(int i =0; i<n; i++)
    {
        if(a[i]>0)
        {
            replace(a.begin(),a.end(),a[i],1);
        }
        else if(a[i]<0)
        {
           replace(a.begin(),a.end(),a[i],2); 
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

  return 0;
}