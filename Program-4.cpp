#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    map<int, int> b;

    for (int i = 1; i <= 9; i++) {
        b[i] = 0;
    }

    for (int i = 0; i < a.size(); i++) {
        for (int j = 1; j <= 9; j++) {
            if (a[i] % j == 0) {
                b[j]++;
            }
        }
    }

    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << b[i];
        if (i != 9) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}
