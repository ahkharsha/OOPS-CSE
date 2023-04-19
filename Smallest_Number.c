#include <stdio.h>

void read_array(int arr[], int n) {
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int n) {
    int i;
    printf("Array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int find_small(int arr[], int n) {
    int i, small, pos;
    small = arr[0];
    pos = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] < small) {
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}

int main() {
    int n, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    read_array(arr, n);
    print_array(arr, n);
    pos = find_small(arr, n);
    printf("The smallest element is %d and its position is %d\n", arr[pos], pos);
    return 0;
}
