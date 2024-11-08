#include <stdio.h>
int main() {
    int n, i, j , count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find the frequency of: ");
    scanf("%d", &j);
    for(i = 0; i < n; i++) {
        if(arr[i] == j) {
            count++;
        }
    }
    printf("Frequency of %d in the array is: %d\n", j, count);
    return 0;
}
