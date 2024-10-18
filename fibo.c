#include<stdio.h>
void printArr(int *a, int n){
	for (int i=0; i<n;i++){
		printf("%d\n",*(a+i)); }
}

void fib(int *f0,int *f1, int n){
	int arr[n];
	arr[0]=*f0;
	arr[1]=*f1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2]; }
	printArr(arr,n);
}
int main(){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int f0=0, f1=1;
	fib(&f0,&f1,n);


return 0;}
