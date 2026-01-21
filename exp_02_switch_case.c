
#include <stdio.h>

int main() {
    int d;
    printf("Enter a number : ");
    scanf("%d", &d);

    switch(d) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid input");
    }

    return 0;
}










