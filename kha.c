#include<stdio.h>

int main()
{
	
	int i,j;

	

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=9;j++)
		{     if(j==9||i==1||(j==4&&i!=4)||(j==2&&i!=2&&i!=3&&i!=5&&i!=6)||(j==3&&i!=2&&i!=3&&i!=5&&i!=6)||(j==7&&i!=2&&i!=4&&i!=6)||(j==8&&i!=2&&i!=4&&i!=6)||(j==6&&i!=2&&i!=3&&i!=5&&i!=6))

			printf("*");

		      else
			printf(" ");
		}

		printf("\n");

	}

	return 0;
}