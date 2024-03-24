#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{20, 30, 40};

    // for (int i = 0; i < 10; i++)
    // {
    //     arr.push_back(i);
    // };

    arr.insert(arr.begin(), {5,10});
    arr.erase(arr.begin()+1, arr.begin()+3);
    vector<int>::iterator it;
    it = arr.begin();

    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cout << *(it) << endl;
    }

    // cout << "it value is: " << *(it+2);

    // cout << arr[0];
}