#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {int length;
    srand(time(NULL)); //our seed for generating the random password, not the best method but works for simple password generators like these
    char allchars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*"; //all posible chars, you can define more
    int numchars = sizeof(allchars) -1;
    printf("Enter the desired length for your password: ");
    scanf("%d", &length); 
    printf("Your password is: ");
    for (int i = 0; i < length; i++) {
        //making the password in this for loop
        int index = rand() % numchars;
        printf("%c", allchars[index]);}
return 0;}
