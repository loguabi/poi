#include<stdio.h>
int main()
{
int f,s,*p,*q,sum;
printf("Enter two numbers to add\n");
scanf("%d%d",&f,&s);
p=&f;
q=&s;
sum=*p+*q;
printf("Sum of the entered numbers=%d",sum);
return 0;
}
