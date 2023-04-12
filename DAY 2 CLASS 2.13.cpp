#include <stdio.h>

int main() {
    int i, j, n, sum = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if(i == j) {
                sum += arr[i][j];
            }
        }
    }
    printf("Diagonal elements are: ");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\nSum of diagonal elements = %d", sum);
    return 0;
}

