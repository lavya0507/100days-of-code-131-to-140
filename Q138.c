// Q138: Print all enum names and integer values using a loop.
#include <stdio.h>
enum Colors {
    RED,
    GREEN, 
    BLUE, 
    YELLOW
};
int main() 
{
    for (int i = RED; i <= YELLOW; i++)
    { printf("%d\n", i); }
    return 0;
}
