#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    for(int i = 0; i < test; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;

        for(char c : s) {
            if(st.empty()) {
                st.push(c);
            } 
            else
             {
                if((c == 'R' && st.top() == 'B') || (c == 'B' && st.top() == 'R')||(c == st.top())) 
                {
                    st.pop();
                    if(!st.empty() && st.top() == 'P') {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                } 
                else if((c == 'R' && st.top() == 'G') || (c == 'G' && st.top() == 'R')||(c ==st.top()))
                 {
                    st.pop();
                    if(!st.empty() && st.top() == 'Y') 
                    {
                        st.pop();
                    } 
                    else 
                    {
                        st.push('Y');
                    }
                } 
                else if((c == 'B' && st.top() == 'G') || (c == 'G' && st.top() == 'B')||(c ==st.top())) 
                {
                    st.pop();
                    if(!st.empty() && st.top() == 'C') {
                        st.pop();
                    } 
                    else
                    {
                        st.push('C');
                    }
                } 
                else 
                {
                    st.push(c);
                }
            }
        }

        stack<char> sst;
        while(!st.empty()) {
            sst.push(st.top());
            st.pop();
        }
        while(!sst.empty()) {
            cout << sst.top();
            sst.pop();
        }
        cout << endl;
    }

    return 0;
}