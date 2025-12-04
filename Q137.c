// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include<stdio.h>
#include<string.h>
enum user_role {
    GUEST, USER, ADMIN,
};
int main()
{
    enum user_role your_role;
    char role[10];
    printf("Enter your role: ");
    fgets(role, sizeof(role), stdin);
    role[strcspn(role, "\n")] = '\0';
    if(strcasecmp(role, "ADMIN") == 0)
    { your_role = ADMIN; }
    else if(strcasecmp(role, "USER") == 0)
    { your_role = USER; }
    else if(strcasecmp(role, "GUEST") == 0)
    { your_role = GUEST; }
    else
    { printf("Invalid Input.");
        return 0; }
    if(your_role == GUEST)
    { printf("Welcomme Guest!\n"); }
    else if(your_role == ADMIN)
    { printf("Greeting Admin!\n"); }
    else if(your_role == USER)
    { printf("Greeting User!\n");}
    return 0;
}