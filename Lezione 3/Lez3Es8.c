#include <stdio.h>
int main ()
{
    float a;
    float b;
    char op;
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%c", &op);//svuota buffer
    scanf ("%c", &op);
    if (op == '+') {
        printf ("%.1f", a + b);
    }
    else if (op == '-') {
        printf ("%.1f", a - b);
    }
    else if (op == '/') {
        printf ("%.1f", a / b);
    }
    else if (op == '%') {
        printf ("%d.0 \n", (int)a % (int)b);
    }
    return 0;
}