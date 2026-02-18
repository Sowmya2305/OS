#include<stdio.h>
#include<unistd.h>
int main(){
int k,n=10;
for(k=1;k<=n;k++){
fork();
printf("ACE");
}
}
