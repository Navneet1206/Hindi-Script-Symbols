#include<stdio.h>

int main()
{
	
	int i,j;

	

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=7;j++)
		{     if(i==1||j==4||(i==3&&j!=3&&j!=5&&j!=1&&j!=7)||(i==5&&j!=1&&j!=5&&j!=6&&j!=3)||(i==4&&j!=2&&j!=5&&j!=6))

			printf("*");

		      else
			printf(" ");
		}

		printf("\n");

	}

	return 0;
}