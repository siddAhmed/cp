/* Algoritm
START
DEFINE fuction prototype power with two integers parameters as base and exponent
DEFINE fuction power 
    IF exponent == 0 THEN 
        RETURN 1
    ELSE 
        RETURN base * CALL power with arguments base and (exponent -1)
    ENDIF
DEFINE main
    READ/INPUT the base and exponent (base, exp)
    PRINT base raised to exponent is CALL power with arguments base and exp
END
*/

#include <stdio.h>

int power(int base, int exponent);

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else 
    {
        return base * power(base, exponent -1);
    }
}

int main()
{
    int base, exp;
    printf("Enter base and exponent:");
    scanf("%d %d", &base, &exp);
    printf("%d raised Sto %d is %d\n", base, exp, power(base, exp));
    return 0;
}

