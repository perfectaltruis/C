#include<stdio.h>

   int main(){
   float num, num1, sum, diff, div, pro;

   printf("Enter two numbers: \n");
    scanf("%f %f", &num, &num1);

   sum = num + num1;
   diff = num - num1;
   pro = num * num1;
   div = num / num1;

    printf("Sum is: %.2f\n", sum);
    printf("Difference is: %.2f\n", diff);
    printf("Division is: %.2f\n", div);
    printf("Product is: %.2f\n", pro);
   return 0;
 }
