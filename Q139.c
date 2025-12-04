// Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Test {
    X, 
    Y, 
    Z 
};
int main() 
{
    printf("%d %d %d", X, Y, Z);
    return 0;
}