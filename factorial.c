#include<stdio.h>
int factorial(int n){
	int i = 0, f = 1;
	for(i = 1; i <= n + 1; i++)
		f *= i;
	return f;
}
int main(int argc, char *argv){
	int n;
	printf("Enter the number of which you want to find the factorial\n");
	scanf("%d", &n);
	int fact = factorial(n);
	printf("The factorial of the given number is %d\n", fact);
	return 0;
}	
