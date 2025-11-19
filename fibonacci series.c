#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;

    printf("Enter the number up to which you want the Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d:\n", limit);

    printf("%d %d ", first, second);

    next = first + second;
    while (next <= limit) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}
