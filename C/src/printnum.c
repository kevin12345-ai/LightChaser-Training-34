#include <stdio.h>


int main() {
    int result = 0;
    for (int i = 1; i <= 100; i++) {
        if(i % 2 == 1){
            result += i;
        }
    }
    printf("结果是: %d\n", result);
}