// Q140: Define a struct with enum Gender and print person's gender.
#include<stdio.h>
#include<string.h>
enum Gender { 
    MALE, 
    FEMALE 
};
struct Person {
    char name[50];
    enum Gender gen;
};
int main() 
{
    struct Person p;
    char gender[10];
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")] =  '\0';
    printf("Enter gender: ");
    scanf("%s", gender);
    if(strcasecmp(gender, "MALE") == 0) 
    { p.gen = MALE; } 
    else if(strcasecmp(gender, "FEMALE") == 0)
    { p.gen = FEMALE; } 
    else
    { printf("Invalid gender entered. Defaulting to MALE.\n");
      p.gen = MALE; }
    if(p.gen == MALE)
    printf("%s MALE", p.name);
    else if(p.gen == FEMALE)
    printf("%s FEMALE%s", p.name);
    return 0;
}