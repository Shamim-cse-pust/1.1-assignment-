#include <stdio.h>
#include <string.h>
char a[10000], b[10000];
int c[10000], d[10000];

int main()
{
    scanf("%s", a);
    int length = strlen(a);
    int length2 = length, t;
    scanf("%d", &t);

    for (int i = 0; i < length; i++) {a[i] -= 48; b[i] = a[i];}

    while (--t) {

    int temp = 0, x = 0, k = 0;

    for (int i = length - 1, lst = 0; i >= 0; i--, lst++) {

        for (int i = 0; i < lst; i++) c[i] = 0;
        x = lst;

        temp = 0;
        for (int j = length2 - 1; j >= 0; j--) {
            temp += a[j] * b[i];

            c[x++] = temp % 10;
            temp /= 10;
        }

        while (temp > 0) {
            c[x++] = temp % 10;
            temp /= 10;
        }

        //if (k != 0) c[0] = 0;
        temp = 0;
//for (int q = x-1; q >= 0; q--) printf("%d", c[q]); printf("\n");
        for (k = 0; k < x; k++) {
            temp += c[k] + d[k];

            d[k] = temp % 10;
            temp /= 10;
        }

        while (temp > 0) {
            d[k++] = temp % 10;
            temp /= 10;
        }
        //=====> x = 1;
    }


    length2 = 0;
    for (--k; k >= 0; k--, length2++) {
        a[length2] = d[k];
        d[k] = 0;
    }

    }

    for (int i = 0; i < length2; i++)
        printf("%d", a[i]);

    return 0;
}
