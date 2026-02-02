#include <stdio.h>
int main() {
int n;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements: ", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("\nOriginal array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
int pos;
printf("Enter position to delete (1 to %d): ", n);
scanf("%d", &pos);
if (pos < 1 || pos > n) {
printf("Invalid position!\n");
return 1;
}
printf("\nDeleting element at position %d (value = %d)\n", pos, arr[pos - 1]);
for (int i = pos - 1; i < n - 1; i++) {
arr[i] = arr[i + 1];
}
printf("\nUpdated array after deletion: ");
for (int i = 0; i < n - 1; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}
