#include<stdio.h>
int main()
{
double number;
printf("enter the number=");
scanf("%if",&number);
if(number<0)
printf("The number has negative integer");
else
if(number>0)
printf("The number has positive integer");
else
if(number=0)
printf("The number is 0");
return 0;
}
