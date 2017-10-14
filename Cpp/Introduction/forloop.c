#include <stdlib.h>
#include <stdio.h>

int main() {
    int a;
    int b;
    char *dec[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &a);
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++) {
        
	if (i < 10)
            printf("%s\n",dec[i-1]);
        
	else if (i % 2)
            printf("odd\n");
        
	else
            printf("even\n");
    
    }
    
    return 0;
}
