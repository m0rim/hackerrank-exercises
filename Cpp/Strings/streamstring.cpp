#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    char ch;
    int strint; 
    vector<int> numbers;
    stringstream strstream(str);
    
    while(strstream >> strint) {
        numbers.push_back(strint);
        strstream >> ch;
    }
    
    return numbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
