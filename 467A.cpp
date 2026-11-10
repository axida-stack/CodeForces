#include <iostream>

using namespace std;

void solve() {
    int n;
    int p, q;
    int sum = 0;
    cin >> n;
    while (n--){
        cin >> p >> q;
        if (q-p >= 2)
            sum ++;
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

