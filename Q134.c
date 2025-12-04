// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
#include <string.h>
enum status {
    FAILURE, SUCCESS, TIMEOUT,
};
int main() {
    enum status current_stat;
    char stat[20];
    printf("Enter operation status (Failure / Success / Timeout): ");
    scanf("%s", stat);
    if(strcasecmp(stat, "SUCCESS") == 0)
    { current_stat = SUCCESS; }
    else if(strcasecmp(stat, "FAILURE") == 0)
    { current_stat = FAILURE; }
    else if(strcasecmp(stat, "TIMEOUT") == 0)
    { current_stat = TIMEOUT; }
    else
    { printf("Invalid input!");
        return 0; }
    if(current_stat == SUCCESS)
    printf("Operation Status: Success");
    else if(current_stat == FAILURE)
    printf("Operation Status: Failure");
    else if(current_stat == TIMEOUT)
    printf("Operation Status: Timeout");
    return 0;
}
