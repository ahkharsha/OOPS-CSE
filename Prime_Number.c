#include <stdio.h>

int main() {
    int num, i, isPrime;

    while (1) {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        isPrime = 1;

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (num==1 || num==0) {
          printf("%d is neither prime nor composite.\n",num);
        } else if (isPrime == 1) {
            printf("%d is a prime number.\n", num);
        } else if (isPrime == 0) {
            printf("%d is a composite number.\n", num);
        }
    }

    return 0;
}
