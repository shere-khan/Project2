#include <stdio.h>

#define SWIM_Y 'Y'

int main() {

    char digging;
    printf("Do you like digging for treasure?");
    scanf("%c", &digging);
    printf("\n");

    char swimming;
    printf("Can you swim?");
    scanf("%c", &swimming);
    printf("\n");

    int meters;
    if (swimming == SWIM_Y) {
        printf("How many meters can you swim?");
        scanf("%d", &meters);
        printf("\n");
        if (meters < 100)
            printf("You cannot join the team");
        printf("You can join the team");
    } else
        printf("You cannot join the team");

    return 0;
}