#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos, x;
    
    printf("Enter position: ");
    scanf("%d", &pos);
    
    printf("Enter element to insert: ");
    scanf("%d", &x);
    
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos - 1] = x;
    
    printf("\nUpdated array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
