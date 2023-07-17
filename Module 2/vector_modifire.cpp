#include<bits/stdc++.h>
using namespace std;
int main()
{  
    // type 1 vector assign
    // // vector <int> v={10,20,30,40};
    // // vector <int> x={100,200,300,400};
    // // v=x; // O(1) time complexity
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     cout<<v[i]<<" ";
    // // }

    // // O(N) complexity
    // vector <int> v={10,20,30,40,50};
    // vector <int> x={100,200,300,400};
    // v=x; // O(N) time complexity
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    // type 2 vector push pop
     vector <int> v={10,20,30,40,50};
     v.push_back(60);
     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;
    }
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }



  return 0;
}