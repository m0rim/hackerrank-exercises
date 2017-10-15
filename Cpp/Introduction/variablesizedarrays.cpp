#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int recv{};
    int send{};
    int index{};
    int kval{};
    int k{};
    
    vector<vector<int>> vlarray;
    cin >> recv;
    cin >> send;
    
    for (int i = 0; i < recv; i++) {
        vector<int> temp{};
        
	cin >> k;
        for(int j = 0; j < k; j++) {
            cin >> kval;
            temp.push_back(kval);
        }
        
	vlarray.push_back(temp);
    }
    
    for (int i = 0; i < send; i++) {
        cin >> index;
        cin >> k;
        cout << vlarray[index][k] << endl;
    }
        
    return 0;
}

