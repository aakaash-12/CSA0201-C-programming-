#include <stdio.h>

int main() {
    int d, fare = 100;
    char member[10];

    scanf("%d", &d);
    scanf("%s", member);

    if (d > 10)
        fare = fare + (d - 10) * 20;

    if (member[0] == 't')
        fare = fare - fare * 10 / 100;

    printf("Final Fare: ₹%d", fare);

    return 0;
}
