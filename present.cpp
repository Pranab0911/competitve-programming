#include <iostream>
using namespace std;
int n, b, a[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        a[b] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}