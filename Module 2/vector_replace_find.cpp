#include<bits/stdc++.h>
using namespace std;
int main()
{  
    // vector <int> v={1,3,4,7,7,5,6,9,8,3,4,1,2};
    // replace(v.begin(),v.end(),4,100);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    // ****************** Find ********************
    vector <int> v={1,3,4,7,7,5,6,9,8,3,4,1,2};
    // vector <int>::iterator it;
    // it=find(v.begin(),v.end(),7);
    // cout<<*it;
    auto it=find(v.begin(),v.end(),100);
    // cout<<*it;
    if(it==v.end()) cout<<"Not Found";
    else cout<<"Found";


  return 0;
}