#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    char aux;
    
    cin >> a;
    cin >> b;
    
    cout << a.size() <<" "<< b.size() << endl;
    cout << a + b << endl;
    
    aux = a[0];
    a[0] = b[0];
    b[0] = aux;
    
    cout << a <<" "<< b << endl;
  
    return 0;
}
