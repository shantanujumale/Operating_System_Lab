#include<stdio.h>
int main(){

int n;
printf("Enter a number: ");
scanf("%d",&n);
int i=1; 

while (i<=10){
printf(" %d x %d = %d \n ",n,i,i*n);
i++;
}

return 0;
}





