#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int originalArray[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &originalArray[i]);
    }

    printf("Even index elements: ");
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            printf("%d ", originalArray[i]);
        }
    }
    printf("\n");

    return 0;
}