#include <stdio.h>

int calsumm(int num) {
    int sum = 0;
    
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int main() {
    int num;
    
    printf("Enter a num: ");
    scanf("%d", &num);
    
    int summation = calsumm(num);
    
    printf("Summation: %d\n", summation);
    
    return 0;
}
