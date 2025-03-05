#include <stdio.h>


int add(int num1, int num2) {
	return num1+num2;
}

int main(){
	int a,b;
	printf("Addition App\n");
	printf("Enter 2 numbers\n");
	scanf("%d %d", &a, &b);
	printf("Sum is %d\n",add(a,b));
}
