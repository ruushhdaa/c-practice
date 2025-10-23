#include <stdio.h>

int main() {
    int a, b, s;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    s = a;
    a = b;
    b = s;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
