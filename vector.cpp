#include <iostream>
#include <vector>

// Vector is a template class available in C++ STL (Standard Template Library)  
using namespace std;

int main(){
    vector <int> v;
    for(int i =0; i<10; i++){
        v.push_back(i);
    };

cout  << "Vector contains:" << endl;
for(int i=0;i< v.size(); i++){
    cout << i;
}
}