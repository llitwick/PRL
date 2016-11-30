#include <stdio.h>
int main ()
{
    int tot;
    scanf ("%d", &tot);
    int sec = (tot) % 60;
    int min = ((tot) / 60) % 60;
    int ore = ((tot) / 3600);
    printf("%d h %d min %d s", ore, min, sec);
    return 0;
}