#include<stdio.h>
long int multiplyNumbers(int n);
int fibonacci(int);
int main() {
    int n,i;
    printf("siddhant\n");
    printf("Enter a positive integer:\n");
    scanf("%d",&n);
    printf("Factorial of %d = %ld\n", n, multiplyNumbers(n));
     
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",fibonacci(i));
	}
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 