#include<stdio.h>
void MultipleDisplay(int iNo)
{
	int icnt=0;
	for(icnt=1;icnt<=5;icnt++)
	{
		printf("%d\t",icnt*iNo);
	}
}
int main()
{
 int iValue = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 MultipleDisplay(iValue);
 return 0;
}