#include<stdio.h>
#include<stdio.h>
main(){
    double number1;
    double number2;
    double number3;
    printf("please input two numbers(divided by space)\n");
    scanf("%lf %lf",&number1,&number2);
    number3=(number1+number2)*(number1+number2);
    printf("%.2lf\n",number3);
}

