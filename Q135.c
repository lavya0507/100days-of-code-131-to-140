// Q135: Assign explicit values starting from 10 and print them.
#include<stdio.h>
enum nums{
    A = 10, B, C
};
int main()
{
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    return 0;
}