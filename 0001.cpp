#include <iostream>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        int sum = a + b;

        if (a == b)
            sum *= 3;

        cout << sum << endl;
    }

    return 0;
}
