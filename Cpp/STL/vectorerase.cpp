#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n{};
    int v_values{};
    int d_index{};
    int d_range[2]{};
    vector<int> vct{};
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v_values;
        vct.push_back(v_values);
    }
    cin >> d_index >> d_range[0] >> d_range[1];
    
    auto vct_b = vct.begin();

    vct.erase(vct_b + d_index - 1);
    vct.erase(vct_b + d_range[0] - 1, vct_b + d_range[1] - 1);
    
    cout << vct.size() << endl;
    for(auto& i : vct) {
        cout << i << " ";
    }
    
    return 0;
}

