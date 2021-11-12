#include <q_lnodb.h>
#include <stdio.h>

int main(void)
{
    double val;
    printf("How much is the change? $");
    scanf("%lf", &val);
    Q_lnodb(val);

    return 0;
}
