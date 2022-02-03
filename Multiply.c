#include <stdio.h>
int main(){
    int a, b, product;
    printf("\nEnter Two No.: ");
    scanf("%d %d", &a, &b);

    product = a * b;

    printf("The Product is %d", product);
    return (0);
}