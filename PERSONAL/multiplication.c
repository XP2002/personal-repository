#include <stdio.h>

int main(){

    int a, b, c, product;

    printf("Enter 3 Integers: ");
    scanf("%d %d %d", &a, &b, &c);

    product = a * b * c;

    printf("%d * %d * %d = %d\n", a, b, c, product);
    return 0;

}