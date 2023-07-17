#include<bits/stdc++.h>
using namespace std;
int main()
{
  // *********** Type 1 ************************
    // vector<int> v;  type 1
// *********** Type 2 ************************
    // vector<int> v(5); type 2

// *********** Type 3 ************************
    // vector<int> v(5,10); type 3
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }

// *********** Type 4 ************************
    // vector<int> v2(5,100); type 4
    // vector<int>v(v2);
    
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }

  // *********** Type 5************************
    int a[6]={10,20,30,40,50,60};
    vector<int> v(a,a+6);
    for(int i=0;i<v.size();i++)
    {
       cout<<v[i]<<endl;
    }

    cout<<v.size();

  return 0;
}