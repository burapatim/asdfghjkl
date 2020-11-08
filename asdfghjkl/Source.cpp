#include <stdio.h>

int intersect(int* arr1, int* arr2, int n, int* out);
int main(void) {
    int array1[1000], array2[1000], num, array3[1000];
    scanf_s("%d", &num);
    int k = 0;
    for (int i = 0; i < num; i++) {
        scanf_s("%d", &array1[i]);
    }
    for (int j = 0; j < num; j++) {
        scanf_s("%d", &array2[j]);
    }
    k = intersect(array1, array2, num, array3);
    if (k == 0) {
        printf("No intersect");
    }
    return 0;
}
int intersect(int* arr1, int* arr2, int n, int* out) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                *(out - j) = arr1[i];
                printf("%d ", *(out - j));
                count++;
            }
        }
    }
    return count;
}