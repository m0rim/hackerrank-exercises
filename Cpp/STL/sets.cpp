#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int x;
    int q;
    string exists;
    set<int> s{};
    
    cin >> n;
    for (int i = 0; i < n; i++) {

        cin >> x >> q;

        switch (x) {
        case 1:
            s.insert(q);
            break;

        case 2:
            s.erase(q);
            break;

        case 3:
            exists = s.find(q) == s.end() ? "No" : "Yes";
            cout << exists << endl;
        default:
            break;
        }
    }

    return 0;
}

