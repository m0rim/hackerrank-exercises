#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int y{};
    int q{};
    int mark{};
    string x{};
    map<string, int> m{};
    
    cin >> n;
    for (int i = 0; i < n; i++) {

        cin >> q >> x;

        switch (q) {
        case 1:
            cin >> y;
           
            if (m.find(x) == m.end())
                m.insert(make_pair(x,y));
            else m[x] += y;

            break;
        
        case 2:
            m.erase(x);
            break;
                
        case 3:
            mark = (m.find(x) == m.end()) ? 0 : m[x];
            cout << mark << endl;

        default:
            break;
        }
    }
    
    return 0;
}

