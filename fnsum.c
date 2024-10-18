#include<stdio.h>
	int sum(){
		int num1,num2,sum=0;
		scanf("%d%d",&num1,&num2);
		sum=num1+num2;
		return sum;}
	int main(){
	printf("Enter the numbers you want to find the sum of\n");
	int result;
	result=sum();
	printf("The answer to the sum is= %d\n",result);
	return 0;}
