#include<bits/stdc++.h>
using namespace std;
int main()
{  

    // single one value insert
    // vector <int> v={10,20,30,40,50};
    // v.insert(v.begin()+3,35);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // full array or vector insert

    vector <int> v={10,20,30,40,50};
    vector <int> x={100,200,300,400,500};
    v.insert(v.begin()+3,x.begin(),x.end());

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // using range based for loop
    for(int val:v)
    {
        cout<<val<<" ";
    }


  return 0;
}