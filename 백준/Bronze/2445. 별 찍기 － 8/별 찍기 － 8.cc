#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        int blank = 2*N - 2*i;
        while(blank--) {
            cout << " ";
        }
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << '\n';
    }

    for(int i = N-1; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        int blank = 2*N - 2*i;
        while(blank--) {
            cout << " ";
        }
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}