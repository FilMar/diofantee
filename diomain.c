#include <stdio.h>
#include "faro.h"

main()
{
    int a, b, c, mcd;

    printf("\ninserisci a:");
    scanf("%d", &a);
    printf("\ninserisci b:");
    scanf("%d", &b);
    printf("\ninserisci c:");
    scanf("%d", &c);

    mcd = MCD(a, b);

    if ((c % mcd) == 0)
    {

        printf("\n\nl' equazione diofantea ha soluzioni.\n\n");
        struct dio p;
        p = esteso(a, b);
        printf("\n\nx=%d-%dk\ny=%d+%dk\n\n", p.x, (b / mcd), p.y, (a / mcd));
    }

    else
        printf("\nnon ha soluzioni\n");
}
