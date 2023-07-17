#include<bits/stdc++.h>
using namespace std;
int main()
{  
    vector <int> x={100,200,300,400,500};
    x.erase(x.begin()+1,x.end()-1);
    for(int v: x)
    {
        cout<<v<<" ";
    }

  return 0;
}