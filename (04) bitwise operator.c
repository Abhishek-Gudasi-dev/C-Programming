#include<stdio.h>

int main() {
int a, b;

printf("Enter two numbers: ");
scanf("%d%d", &a, &b);

printf("\nBitwise AND (&) = %d\n", a & b);
printf("Bitwise OR (|) = %d\n", a | b);
printf("Bitwise XOR (^) = %d\n", a ^ b);

return 0;

}