#include<bits/stdc++.h>
using namespace std;
int main()
{  
    vector<int>v;

    // cout<<v.max_size();

//     v.push_back(10);
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     v.push_back(20);
//    cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     v.push_back(30);
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     v.push_back(40);
//    cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     v.push_back(50);
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;'

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);
    // v.clear();
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     if(v.empty()==0)
    // //     {
    // //         cout<<"Empty";
    // //     }
    // //     else
    // //     {
    // //         cout<<"Not Empty";
    // //     }
    
    // // }
    // cout<<v[3];
     v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(3);

    // v.resize(7);
    v.resize(7,100);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    


  return 0;
}