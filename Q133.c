// Q133: Create an enum for months and print how many days each month has.
#include<stdio.h>
#include<string.h>
enum month{
    january, february, march, april, may, june, july, august, september, october, november, december,
};
int main()
{
    char month[50];
    printf("Enter the month: ");
    fgets(month, sizeof(month), stdin);
    month[strcspn(month, "\n")] = '\0';
    if(strcasecmp(month, "january") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "february") == 0)
    { printf("No. of days is 28 or 29"); }
    else if(strcasecmp(month, "march") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "april") == 0)
    { printf("No. of days is 30"); }
    else if(strcasecmp(month, "may") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "june") == 0)
    { printf("No. of days is 30"); }
    else if(strcasecmp(month, "july") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "august") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "september") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "october") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "november") == 0)
    { printf("No. of days is 31"); }
    else if(strcasecmp(month, "december") == 0)
    { printf("No. of days is 31"); }
    return 0;
}