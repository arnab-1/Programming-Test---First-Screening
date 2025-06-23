#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int y = x;
    if (x % 2 == 0) {
        y = x - 1;
    }
    int z = 1;
    for (int i = 0; i < y; i++) {
        cout << z;
        if (i != y - 1) {
            cout << ", ";
        }
        z = z + 2;
    }
    cout << endl;
    return 0;
}
