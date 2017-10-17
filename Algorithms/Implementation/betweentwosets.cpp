#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector<int>& a, vector<int>& b) {
    int total{};
    int firstx = a.back();
    int lastx = b.front();
    int va_len = a.size();
    int vb_len = b.size();
    bool fail = false;
    
    for (int i = firstx; i <= lastx; i++) {
        fail = false;
        
        for (int j = 0; j < va_len; j++) {
            if (i % a[j]) {
                fail = true;
                break;
            }
        }
        
        if (fail)
            continue;
        
        for (int j = 0; j < vb_len; j++){
            if (b[j] % i){
                fail = true;
                break;
            }
        }
        
        if (fail)
            continue;
        
        total += 1;
    }
    return total;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

