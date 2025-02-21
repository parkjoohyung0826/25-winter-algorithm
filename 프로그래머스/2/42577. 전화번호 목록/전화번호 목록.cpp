#include <bits/stdc++.h>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    for(int i = 0; i < phone_book.size() - 1; i++) {
        string prefix = "";
        prefix = phone_book[i];
        if(phone_book[i+1].compare(0, prefix.size(), prefix) == 0) {
            return false;
        }
    }
    return answer;
}