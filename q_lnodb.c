#include <stdio.h>

void Q_lnodb(double value)
{
    printf("You need %s $%.2f bill%s.\n",
           value ? "one" : "zero", value, value ? "" : "s");
}
