#include<stdio.h>
void main(){
                   int p[10],bt[10],wt[10],tat[10],twt,ttat,n,i;
                   float awt,atat;
                   printf("\n enter the no.of process ready to execute");
                   scanf("%d",&n);
                   for(int i=0;i<n;i++){
                                      printf("\n enter the process no:");
                                      scanf("%d",&p[i]);
                                      printf("\n enter the burst time:");
                                      scanf("%d",&bt[i]);
                                      
                   }
                   wt[0]=0;
                   twt=0;
                   tat[0]=bt[0];
                   ttat=bt[0];
                   for(int i=1;i<n;i++){
                                      wt[i]=wt[i-1]+bt[i-1];
                                      tat[i]=wt[i]+bt[i];
                                      twt=twt+wt[i];
                                      ttat=ttat+bt[i];
                                      
                   }
                   awt=(float)twt/n;
                   atat=(float)ttat/n;
                   for(int i=0;i<n;i++){
                   printf("\n process no : %d , burst time : %d , waiting time : %d, turn around time : %d",p[i],bt[i],wt[i],tat[i]);
                   }
                   printf("\n average waiting time : %f",awt);
                   printf("\n average turn around time : %f",atat);
        
}

