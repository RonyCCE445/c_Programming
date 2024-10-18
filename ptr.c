#include<stdio.h>
int main(){

int x=12;
int *ptr=&x;
char ch='c';
char *ptr1=&ch;
printf("%d\n",x);
printf("%x\n",x);
printf("%d",*ptr);
printf("%d\n",*(&x));





return 0;
}
