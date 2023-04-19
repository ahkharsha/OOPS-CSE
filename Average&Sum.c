#include <stdio.h>

int main() {
    int m, n, sum = 0, count = 0;
    float avg;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++) {
        sum += i;
        count++;
    }

    avg = (float)sum / count;

    printf("Sum of numbers from %d to %d is %d\n", m, n, sum);
    printf("Average of numbers from %d to %d is %.2f\n", m, n, avg);

    return 0;
}
