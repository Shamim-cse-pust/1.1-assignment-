#include <stdio.h>
int main()
{
    int hex[1000], i=1, j=0, rem, dec = 0, bin;

    printf("Enter a Binary Number: ");
    scanf("%d",&bin);

    while(bin>0){
        rem = bin % 2;
        dec = dec + (rem*i);
        i = i * 2;
        bin = bin / 10;
    }
    i = 0;
    while(dec!=0){
       hex[i] = dec % 16;
       dec = dec/16;
       i++;
    }

    printf("Equivalent HexaDecimal value: ");
    for(j=i-1;j>=0;j--){
        if(hex[j]>9)
            printf("%c",hex[j]+55);
        else
            printf("%d",hex[j]);
    }
    return 0;
}
