#include<stdio.h>

void Display(int iNo)
{
	int icnt=0;
	for(icnt=iNo;icnt>=(-iNo);icnt--)
	{
		printf("%d",icnt);
	}
}
int main()
{
 int iValue = 0;
 printf("Enter number");
 scanf("%d",&iValue);
 Display(iValue);
 return 0;
} 