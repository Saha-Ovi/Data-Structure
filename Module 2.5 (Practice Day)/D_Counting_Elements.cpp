
#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
       auto it=find(a.begin(),a.end(),a[i]+1);
        if(it!=a.end())
        {
          count++;
        }
    }
    cout<<count;
    


  return 0;
}

// ************************************** My Code *******************************

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {  
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]!=n && a[i]!=0)
//         {
//            count++;
//         }
//         auto it=find(a.begin(),a.end(),a[i]);
//         if(*it!=a[i])
//         {
//           count++;
//         }
//     }
//     cout<<count;
    


//   return 0;
// }