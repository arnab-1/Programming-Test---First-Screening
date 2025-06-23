#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b = 1;
    for (int i = 0; i < a; i++) {
        cout << b;
        if (i != a - 1) {
            cout << ", ";
        }
        b = b + 2;
    }
    cout << endl;
    return 0;
}
