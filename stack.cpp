#include <bits\stdc++.h>

using namespace std;

int main()
{

    stack<int> st ({1, 2, 3, 4, 5});

    st.push(6);
    st.push(7);
    st.push(8);
    
    while (!st.empty())
    {
        int topElement = st.top();
        cout<<topElement;
        st.pop();
    }
    
    return 0;
}