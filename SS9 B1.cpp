#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n = 0, currentLength = 0;

    do {
        printf("Moi ban nhap so phan tu (tu 1 den 99): ");
        scanf("%d", &n);
        if (n <= 0 || n > 99) {
            printf("So phan tu khong hop le! Moi nhap lai.\n");
        }
    } while (n <= 0 || n > 99);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = n;

    int addValue, addIndex;
    printf("Nhap gia tri can them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri can them (0 den %d): ", currentLength);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > MAX_SIZE - 1) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("Mang sau khi them: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

