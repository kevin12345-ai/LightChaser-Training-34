#include <stdio.h>

void Calculator() {
    char symbol;
    printf("请输入符号\n");
    scanf("%c", &symbol);
    printf("请输入两个数字(中间空格)\n");
    int a, b, result;
    scanf("%d %d", &a, &b);
    switch (symbol)
    {
    case '+':
        result = a + b;
        printf("结果是: %d\n", result);
        break;
    case '-':
        result = a - b;
        printf("结果是: %d\n", result);
        break;
    case '*':   
        result = a * b;
        printf("结果是: %d\n", result);
        break;
    case '/':
        if (b == 0) {
            printf("除数不能为零\n");
        } else {
            result = a / b;
            printf("结果是: %d\n", result);
        }
        break;
    case 'q':
        break;
    default:
        break;
    }
}

int main() {
    while (1) {
        Calculator();
    }
}