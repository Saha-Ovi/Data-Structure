#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int m;
    cin>>m;
    vector<int>br(m);
    for(int i=0;i<m;i++)
    {
        cin>>br[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<(n+m);i++) //O(N) >>10^3
    {
        // ar.insert(ar.begin()+x,br.begin(),br.end(),ar.end());
        
    }
    for(int i=0;i<(n+m);i++)
    {
        cout<<ar[i]<<" ";
    }

    return 0;
}