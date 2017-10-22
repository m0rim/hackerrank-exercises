#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int v_size{};
    int v_value{};
    int querry{};
    int n_queries{};
    vector<int> vct{};
    
    cin >> v_size;
    for (int i = 0; i < v_size; i++) {
        cin >> v_value;
        vct.push_back(v_value);
    }
    
    auto v_begin = vct.begin();
    auto v_end = vct.end();
    vector<int>::iterator low;
    
    cin >> n_queries;
    for (int i = 0; i < n_queries; i++) {     
        cin >> querry;
        low = lower_bound(v_begin, v_end, querry);
        
        if(vct[low - v_begin] == querry)
            cout << "Yes " << low - v_begin + 1 << endl;
        else
            cout << "No " << low - v_begin + 1<< endl;
    }
    
    return 0;
}

