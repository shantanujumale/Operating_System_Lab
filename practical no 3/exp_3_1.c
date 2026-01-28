#include<stdio.h>
int main(){
int a,b;

scanf("%d %d",&a,&b);

printf("output\n");

if (a>b){
printf("%d is greater than %d ",a,b);
}
else{
printf("%d is greater than %d",b,a);
}

return 0;
}
