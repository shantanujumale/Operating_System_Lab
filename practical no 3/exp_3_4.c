#include<stdio.h>
int main(){

int n;
int a[10];
printf("Enter a number : ");
scanf("%d",&n);

printf("Enter a array");
for (int i=0;i<n;i++){
scanf("%d",&a[i]);
}

for (int i=0;i<n;i++){

int count = 0;
for (int j=0;j<n;j++){
if (a[i] == a[j]){
count= count+1;
}
}
if (count==1){
printf("%d",a[i]);
}


return 0;
}
