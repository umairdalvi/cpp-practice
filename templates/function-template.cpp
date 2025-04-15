#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b){

    return a+b;
}

int main() {

    cout << sum(12, 43)<<endl;
    cout << sum(11.9, 8.6)<<endl;

    return 0;
}

