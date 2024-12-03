#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, found = 0;
    printf("mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("nhap phan tu can tim: ");
    scanf("%d", &element);
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("phan tu %d duoc tim thay tai: %d\n", element, i);
            found = 1;
        }
    }

    // N?u không t?m th?y
    if (!found) {
        printf("phan tu %d khong ton tai trong mang.\n", element);
    }

    return 0;
}

