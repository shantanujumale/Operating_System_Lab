#include<stdio.h>
int main(){

int n,i;

int bt[10],wt[10],tat[10];
float avg_wt = 0 ,avg_tat = 0;

printf("Enter number of processes ");
scanf("%d",&n);

printf("Enter busrst time of each process: \n");
for (int i =0 ; i<n;i++){
printf("process %d : ",i+1);
scanf("%d",&bt[i]);
}


//wating time for first process is 0

wt[0] = 0;

//calculate wating time
for(int i=0;i<n;i++){
wt[i] = wt[i-1] + bt[i-1];
}

//calculate turnaround time
for(int i=0;i<n;i++){

tat[i] = wt[i] + bt[i];
avg_wt += wt[i];
avg_tat += tat[i];
}

avg_wt /=n; 
avg_tat /=n;

printf("\nprocess\tBist time\t Waiting time\tTurnaround Time");

for(int i=0;i<n;i++){
printf("p%d \t\t %d\t\t %d\t\t %d\n" ,i+1,bt[i],wt[i],tat[i]);
}

printf("\n Average wating time = %.2f\n",avg_wt);
printf("\n Average Turnaround Time = %.2f\n",avg_tat);



return 0;
}
