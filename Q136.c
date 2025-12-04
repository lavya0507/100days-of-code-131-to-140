// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include<stdio.h>
#include<string.h>
enum math{
    ADD , SUBTRACT, MULTIPLY, 
};
int main()
{
    enum math maths;
    char operation[10];
    float x, y, result;
    printf("Enter the operation: ");
    fgets(operation, sizeof(operation), stdin);
    operation[strcspn(operation, "\n")] = '\0';

    if(strcasecmp(operation, "ADD") == 0)
    { maths = ADD; }
    else if(strcasecmp(operation, "SUBTRACT") == 0)
    { maths = SUBTRACT; }
    else if(strcasecmp(operation, "MULTIPLY") == 0)
    { maths = MULTIPLY; }
    else
    { printf("Invalid Input.");
        return 0; }

    printf("Enter 2 numbers: ");
    scanf("%f %f", &x, &y);
    if(maths == ADD)
    { result = x + y; }
    else if(maths == SUBTRACT)
    { result = x - y; }
    else if(maths == MULTIPLY)
    { result = x * y;}
    printf("The result is %f", result);
    return 0;
}