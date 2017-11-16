#include <iostream>
#include <sstream>

void sum_evens(long& limit);

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

void sum_evens(long& limit) {
	unsigned a = 1;
	unsigned b{} ;
	unsigned t{};
	unsigned total{};
	std::stringstream str_total;
	while(b < limit){
		if(b % 2 == 0 && b)
			total += b;
		t = a + b;
		a = b;
		b = t;
	}
	str_total << total;
	std::cout << str_total.str() << std::endl;
}
