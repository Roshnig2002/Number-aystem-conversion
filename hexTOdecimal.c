#include<stdio.h>
#include<stdlib.h>
unsigned long hexToDecimal(char *hex, int length)
{
    int i;
    unsigned long decimal = 0;
    unsigned long weight = 1;
    hex += length - 1;
    for(i = length - 1; i >= 0; --i, --hex)
    {
        decimal += weight * valueOf(*hex);
        weight *= 16;
    }
    return decimal;
}

int main(void)
{
    char hex[17];
    int length;
    unsigned long decimal;
    scanf("%16s", hex);
    length = strlen(hex);
    decimal = hexToDecimal(hex, length);
    printf("%s in hexadecimal is %lu in decimal\n", hex, decimal);
    return 0;
}
