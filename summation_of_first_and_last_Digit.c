#include <stdio.h>

int calsumm(int num) {
    int fdigit, ldigit;
    ldigit = num % 10;
    
    while (num >= 10) {
        num /= 10;
    }
    
    fdigit = num;
    
    return fdigit+ldigit;
}

int main() {
    int num;
    
    printf("Enter a num: ");
    scanf("%d", &num);
    
    int summation = calsumm(num);
    
    printf("Summation: %d\n", summation);
    
    return 0;
}
