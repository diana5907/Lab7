#include <stdio.h>

int isTriangle(int a, int b, int c) {
    // Перевірка умови існування трикутника
    if (a + b > c && a + c > b && b + c > a) {
        return 1;  // Можна утворити трикутник
    }
    else {
        return 0;  // Неможливо утворити трикутник
    }
}

int main() {
    int a, b, c;
    printf("Введіть довжини трьох відрізків:\n");
    printf("a = 10 ");
    scanf("%d", &a);
    printf("b = 10 ");
    scanf("%d", &b);
    printf("c = 10 ");
    scanf("%d", &c);

    if (isTriangle(a, b, c)) {
        printf("Можна утворити трикутник.\n");
    }
    else {
        printf("Неможливо утворити трикутник.\n");
    }

    return 0;
}