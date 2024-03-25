#include <bits\stdc++.h>

using namespace std;

void printStack(stack<int> st)
{
    cout << "Stack elements are" << endl;
    while (!st.empty())
    {
        int topElement = st.top();
        cout << topElement;
        st.pop();
    };
}

int main()
{

    stack<int> st1({1, 2, 3, 4, 5}), st2;

    st1.push(6);
    st1.push(7);
    st1.push(8);
    st1.emplace(10);
    st1(10);

    printStack(st1);
    st1.swap(st2);
    cout << endl;
    printStack(st2);

    return 0;
}