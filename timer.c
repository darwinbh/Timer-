#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int seconds;
    int minuts;

    minuts = 0;
    write(1, "Enter your seconds: ", 20);
    scanf("%d", &seconds);
    write(1, "\n", 1);
    while (seconds >= 60)
    {
        seconds -= 60;
        minuts += 1;
    }

    while (minuts >= 0 && seconds >= 0)
    {
        system("clear");
        printf("          Timer: %02d:%02d\n", minuts, seconds);
        sleep(1);
        if (minuts > 0 && seconds == 0)
        {
            minuts--;
            seconds = 59;
        }
        else
            seconds--;
    }
    while (1)
    {
        system("clear");
        write(1, "\n", 1);
        sleep(1);
        system("clear");
        write(1, "          Time Is Over!\n", 24);
        sleep(1);
    }
}