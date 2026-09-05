#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {int length;
    srand(time(NULL));
    char allchars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int numchars = sizeof(allchars) -1;
    printf("Enter the desired length for your password: ");
    scanf("%d", &length);
    printf("Your password is: ");
    for (int i = 0; i < length; i++) {
        int index = rand() % numchars;
        printf("%c", allchars[index]);}
return 0;}
