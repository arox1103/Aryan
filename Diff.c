#include <stdio.h>
int main(){
    int a, b, diff;
    printf("\nEnter Two No.: ");
    scanf("%d %d", &a, &b);

    diff = a - b;

    printf("The Difference is %d", diff);
    return (0);
}