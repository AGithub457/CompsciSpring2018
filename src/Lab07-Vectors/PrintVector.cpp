#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50, 60, 70};
    int ar[10] = {10, 20, 30, 40, 50, 60, 70};

    copy(v.begin(), v.end(), ostream_iterator<int>(cout, "V"));
    copy(ar, ar + 8, ostream_iterator<int>(cout, "V"));


    return 0;
}