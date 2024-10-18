#include<stdio.h>
int swap(int *n1, int *n2){
int temp;
temp=*n2;
*n2=*n1;
*n2=temp;

return n1,n2
;}

int main(){
int n1,n2;
//scanf("%d%d",&n1,&n2);
n1=10;
n2=20;
int result;
result=swap(n1,n2);
printf("The values are= %d",result);
return 0;}

