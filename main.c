#include<stdio.h>

int add(int a, int b){
	return a+b;
}

int main(){
	int a=5;
	int b=6;
	int c=a+b;
	printf("%d+%d=%d\n",a,b,c);
	printf("Using Function\n");
	printf("%d+%d=%d\n",10,45,add(10,45));

	return 0;
}
