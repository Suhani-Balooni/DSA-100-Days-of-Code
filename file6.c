#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d sorted integers (space-separated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n == 0) {
        return 0;
    }
    
    printf("\nUnique elements: ");
    printf("%d", arr[0]);
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            printf(" %d", arr[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}
