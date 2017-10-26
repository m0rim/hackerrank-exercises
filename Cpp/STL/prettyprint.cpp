#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/*  The code bellow sucks
		 *  I'm sorry \(T-T)/
		 */

		cout << setw(0) << setprecision(1) << nouppercase;
		cout << showbase << hex << (long long)A << dec << endl;
		cout << fixed << right << setw(15) << setfill('_');
		cout << setprecision(2) << showpos << B;
		cout << setw(0) << noshowpos << endl;
		cout << scientific << uppercase << setprecision(9) << C << endl;
	}
	return 0;
}	
