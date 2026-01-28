#include<stdio.h>
int main(){
int a,b;

printf("Enter a number : ");
scanf("%d",&a);

printf("Enter a number : ");
scanf("%d",&b);

int sum = a+b;
int sub = a-b;
int mul = a*b;
int div = a/b;
int mod = a%b;

printf("sum is %d\n",sum);
printf("sub is %d\n",sub);
printf("mul is %d\n",mul);
printf("div is %d\n",div);
printf("mod is %d\n",mod);

return 0;
}
