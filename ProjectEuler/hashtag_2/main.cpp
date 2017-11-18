/*
* Score: 75/100
* Due to timeout
* TODO(sysco): Fix test case 3
*/
#include <iostream>
#include <sstream>
#include <cmath>

const double inv_sqrt_five = 0.44721359549995793928183473374626;
const double phi = 1.6180339887498948482045868343656;
void sum_evens(const long& limit);

int main(){
    int t;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        std::cin >> n;
		sum_evens(n);
    }

    return 0;
}

void sum_evens(const long& limit) {
	long a = 3;
	long long b{};
	long long total{};
	std::stringstream str_total;
	while(b < limit){
		b = (long long)floor((pow(phi, a) * inv_sqrt_five + 0.5 ));
		// std::cerr << "LOGGING: " << b << std::endl;
		if(b % 2 == 0 && b < limit)
			total += b;
		a += 3;
	}

	str_total << total;
	std::cout << str_total.str() << std::endl;
}
