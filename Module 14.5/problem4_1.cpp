// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {  
//    queue<int> q;
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++)
//    {
//         int x;
//         cin>>x;
//         q.push(x);
//    } 
//     for (int i = 0; i < n; i++) {
//         q.push(q.front());
//         q.pop();
//     }
//     while(!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    // Reverse the queue
    for (int i = 0; i < n; i++) {
        q.push(q.front());
        q.pop();
    }

    // Print the reversed queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
