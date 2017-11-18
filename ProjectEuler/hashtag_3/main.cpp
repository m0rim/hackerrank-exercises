/*
*
* Score: 40/100
* TODO(sysco): find the magical way to pass testcase 1,2,3
*
*/
#include <iostream>
#include <cmath>

void solution(long long& number);
bool even_div(long long *number);

int main(){
    int t;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        std::cin >> n;
		solution(n);
    }

    return 0;
}

bool even_div(long long *number) {
	for(;;) {
		if(*number % 2 && *number != 1)
			return false;
		*number /= 2;
		std::cerr << "Even division: " << *number << std::endl;
		if(*number == 1) {
			std::cout << 2 << std::endl;
			return true;
		}
	}
}
void solution(long long& number) {
	long long ans{};
	long long sqrt_number{};
	if(number % 2 == 0) {
		if(even_div(&number))
			return;
	}

	sqrt_number = (long long) floor(sqrt(number));
	for (long long i = 3;i <= sqrt_number; i += 2){
		if(number % i == 0){
			std::cerr << ans <<" "<< i <<" "<< number << std::endl;
			if(i > ans) ans = i;

			number = number / i;
			i = 3;
		}
	}
	if(number > ans)
		std::cout << number << std::endl;
	else
		std::cout << ans << std::endl;
}
