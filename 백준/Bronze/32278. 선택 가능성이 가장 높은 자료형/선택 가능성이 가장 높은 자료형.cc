#include <iostream>
#include <limits.h> // INT_MIN, INT_MAX, LONG_LONG_MIN, LONG_LONG_MAX

using namespace std;

int main() {
    long long N;
    cin >> N;

    if (N >= SHRT_MIN && N <= SHRT_MAX) {
        cout << "short" << endl;
    } else if (N >= INT_MIN && N <= INT_MAX) {
        cout << "int" << endl;
    } else if (N >= LLONG_MIN && N <= LLONG_MAX) {
        cout << "long long" << endl;
    }

    return 0;
}
