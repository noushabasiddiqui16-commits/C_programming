// Name-Noushaba Siddiqui ,UIN-251P080
// Roll-5,F.E,Div-D
// Branch- Computer Engineering
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);

    return 0;
}