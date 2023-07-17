#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int l,r;
    cin>>l>>r;
    int pre[n];
    pre[0]=ar[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=ar[i]+pre[i-1];
    }
//    for(int i=l;i<=r;i++)
//    {
//       if(l==0) cout<<pre[r];
//     else cout<< pre[r]-pre[l-1];
//    }
  if(l==0) cout<<pre[r];
 else cout<< pre[r]-pre[l-1];

  return 0;
}