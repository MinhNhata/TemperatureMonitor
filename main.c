
#include <stdio.h>

int main(void)
{
    int temperature = 35;

    printf("Temperature: %d C\n", temperature);

    if (temperature >= 30)
    {
        printf("Warning: High temperature!\n");
    }

    return 0;
}
