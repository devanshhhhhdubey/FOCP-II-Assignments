#include<bits/stdc++.h>
using namespace std;

string solve (int n, vector<int> arr) {
    sort(arr.begin(), arr.end(), greater<int>());

    int a = 0, b = 0;
    int turn = 0;

    int maxVal = arr[0];
    vector<int> used(maxVal + 1, 0);

    for(int i = 0; i < n; i++) {
        if(used[arr[i]] >= 2) continue;

        used[arr[i]]++;

        if(turn == 0) {
            a += arr[i];
            turn = 1;
        } else {
            b += arr[i];
            turn = 0;
        }
    }

    if(a > b) return "Alex";
    else return "Bob";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << solve(n, arr) << "\n";
    }
}