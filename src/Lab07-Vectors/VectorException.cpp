
#include <iostream>
#include <vector>
#include <exception>

using namespace std;


void fill_vec(vector<int> &v, int n)    // initialize v with factorials
{
    for (int i = 0; i < n; ++i) v.push_back(i);
}

int main() {
    vector<int> v;
    try {
        fill_vec(v, 10);
        for (int i = 0; i <= 12; ++i)
            cout << "v[" << i << "]==" << v.at(i) << '\n';
    }
    catch (exception &e) {        // we'll get here (why?)
        cout << "\nout of range error";
        return 1;
    }
    return 0;
}
