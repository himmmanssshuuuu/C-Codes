#include <stdio.h>

int main(void)
{
    printf("int %lu\n", sizeof(int));
    printf("char %lu\n", sizeof(char));
    printf("2 %lu\n", sizeof(2));
    printf("'a' %lu\n", sizeof('a'));
    printf("'\\n' %lu\n", sizeof('\n'));
    printf("2.5 %lu\n", sizeof(2.5));
    int a = 5, c = 1;
    double b = 2.5;
    printf("sizeof a is %lu\n", sizeof(a));
	printf("sizeof \n");
    return 0;
}
