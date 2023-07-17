// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {  
//    int n;
//    cin>>n;
//    int ar[n][n];
//    int mid=(n/2);
//    for(int i=0;i<n;i++)
//    {
//         for(int j=0;j<n;j++)
//         {
//             //x er jonno
//             if(i==j && i==mid)
//             {
//                 cin>>ar[i][j];
//             }
//             // backslash er jonno
//             if(i==j)
//             {
//                 cin>>ar[i][j];
//             }
//             // slash er jonno
//             else if(i+j==n-1)
//             {
//                 cin>>ar[i][j];
//             }
//         }
//    } 

//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main()
{  
   int n;
   cin >> n;
   char ar[n][n]; // Use char instead of int to store characters

   int mid = n / 2;

   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n; j++)
        {
            // 'x' for the middle element
            if (i == mid && j == mid)
            {
                ar[i][j] = 'x';
            }
            // backslash for elements on the main diagonal
            else if (i == j)
            {
                ar[i][j] = '\\';
            }
            // slash for elements on the secondary diagonal
            else if (i + j == n - 1)
            {
                ar[i][j] = '/';
            }
            // empty space for other elements
            else
            {
                ar[i][j] = ' ';
            }
        }
   }

   // Print the pattern
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
   } 

   return 0;
}
