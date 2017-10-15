#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int cnt;
    int *arrayofn = nullptr;
    
    cin >> n;
    
    arrayofn = (int *) malloc(n * sizeof(n));
    if(arrayofn == nullptr)
        return -1;
    
    for (int i = 0; i < n; i++) {
        cin >> arrayofn[i];
    }
    for (int i = n-1; i >= 0; i--) {
        cout << arrayofn[i] << " ";   
    }
    free(arrayofn);
    arrayofn = nullptr;

    return 0;
}
