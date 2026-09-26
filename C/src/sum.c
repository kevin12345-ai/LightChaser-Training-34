#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(sizeof(int)*10);
    for (int i = 0; i < 10; i++) {
        printf("请输入第 %d 个数字: ", i + 1);
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += *(a + i);
    }
    printf("Sum = %d\n", sum);

    free(a);
    return 0;
}
