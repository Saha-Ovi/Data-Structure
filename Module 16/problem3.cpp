#include<bits/stdc++.h>
using namespace std;
int main()
{  
   queue<string> myQueue;
   int n ; 
   cin>>n;
   for(int i=0;i<n;i++)
   {
        int q;
        cin>>q;
         if(q==0)
        {
            string name;
            cin>>name;
            myQueue.push(name);
        }
        else
        {

            if(myQueue.empty())
            {
            cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<myQueue.front()<<endl;
                myQueue.pop();
            }
        }
   }
      
  return 0;
}


//           if(q==1)
//         {
//             if(myQueue.empty())
//             {
//             cout<<"Invalid"<<endl;
//             }
//             else
//             {
//                 myQueue.pop();
//                 cout<<endl;
//             } 
//         }
//         else
//         {
//             string name;
//             cin>>name;
//             myQueue.push(name);
//         }
       
//    }