//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include<stdio.h>
#include<string.h>
enum light{
    GREEN, YELLOW, RED,
};
int main()
{
    char color[50], temp;
    printf("Enter the traffic light color: ");
    fgets(color, sizeof(color), stdin);
    color[strcspn(color, "\n")] = '\0';
    
    if(strcasecmp(color, "GREEN") == 0)
    { printf("Go!\n"); }
    else if(strcasecmp(color, "YELLOW") == 0)
    { printf("Wait!\n"); }
    else if(strcasecmp(color, "RED") == 0)
    { printf("Stop!\n"); }
    return 0;
}