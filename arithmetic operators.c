#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,sub,multi,mod;
	float div;
	printf("enter any two numbers");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	sub=num1-num2;
	multi=num1*num2;
	div=(float)num1/num2;
	mod=num1%num2;
	printf("SUM=%d\n",sum);
	printf("DIFFERENCE=%d\n",sub);
	printf("PRODUCT=%d\n",multi);
	printf("QUOTIENT=%d\n",div);
	printf("MODULUS=%d\n",mod);
	return 0;
	
}
