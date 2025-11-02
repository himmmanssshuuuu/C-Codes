#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter a value for 'a': ");
    scanf("%d", &a);
    printf("Enter a value for 'b': ");
    scanf("%d", &b);
    a += b;
    printf("for += ,a = %d and b = %d\n", a, b);
    a *= b;
    printf("for *=, a = %d and b = %d\n", a, b);
    a <<= b;
    printf("for <<=, a = %d and b = %d\n", a, b);
    a >>= b;
    printf("for >>=, a = %d and b = %d\n", a, b);
    a &= b;
    printf("for &=, a = %d and b = %d\n", a, b);
    a -= a + 1;
    printf("for a -= a + 1, a = %d and b = %d\n", a, b);
    return 0;
}
