#include <stdio.h>
int main() {
    int a, b;
    float div;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        div = (float)a / b;
        printf("Division = %.2f\n", div);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }

    return 0;
}
