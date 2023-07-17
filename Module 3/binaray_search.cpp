// ************************** Pure Binary Search ******************************

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
   int x;
   cin>>x; //search value
   int l=0;  //starting index
   int r=n-1; //ending index
   int flag=0;  //dhore nebo value pabo nah
   while(l<=r)
   {
    int mid=(l+r)/2;
    if(ar[mid]==x)
    {
        flag=1;
        break;
    }
    if(x>ar[mid])
    {
        //dane
        l=mid+1;

    }
    else
    {
        //bame
        r=mid-1;
    } 
   }
   if (flag==1) cout<<"Found";
   else cout<<"Not Found";


  return 0;
}