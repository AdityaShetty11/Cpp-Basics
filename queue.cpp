#include <bits/stdc++.h>

using namespace std;

void printQueue(queue<int> q)
{

    cout << "Printing Queue";
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
}

int main()
{

    queue<int> q1;

    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.emplace(9);
    q1.push(5);

    cout << "Front of queue is: " << q1.front() << endl;
    cout << "Back of queue is: " << q1.back() << endl;
    cout << "Queue" << endl;
    printQueue(q1);
    return 0;
}