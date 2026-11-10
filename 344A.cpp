#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string mag[n];
    for (int i=0; i<n; i++){
        cin >> mag[i];
    }
    int count = 0;
    for (int i=0; i<n; i++){
        if (mag[i]!=mag[i+1]){
            count ++;
        }
    }
    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

