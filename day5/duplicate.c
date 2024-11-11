#include <stdio.h>
int main() {
    int arr[10], n, i, j, uniqueCount = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueCount++] = arr[i];
        }
    }
    printf("Array after removing duplicates:\n");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}