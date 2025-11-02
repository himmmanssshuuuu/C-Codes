#include <stdio.h>

int main(void)
{
    int a, b, AND, XOR, OR, left_shift, right_shift;
    printf("Enter a number for 'a': ");
    scanf("%d", &a);
    printf("Enter a number for 'b': ");
    scanf("%d", &b);
    // Ones compliment
    printf("a is %d and it's ones compliment is %d.\n", a, ~a);
    // AND opertor
    AND = a & b;
    printf("Using AND opertor on a = %d and b = %d gives %d.\n", a, b, AND);
    // XOR operator
    XOR = a ^ b;
    printf("Using XOR opertor on a = %d and b = %d gives %d.\n", a, b, XOR);
    // OR opertor
    OR = a | b;
    printf("Using OR opertor on a = %d and b = %d gives %d.\n", a, b, OR);
	// Left Shift
	left_shift = a << b; // b >= 0 always
    printf("Using left_shift opertor on a = %d and b = %d gives %d.\n", a, b, left_shift);
	// Right Shift
	right_shift = a >> b; //
    printf("Using right_shift opertor on a = %d and b = %d gives %d.\n", a, b, right_shift);
    return 0;
}
