#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((i==5)||(j==5)||(i==1&&j!=2&&j!=3&&j!=4)||(j==1&&i>=1&&i<5)||(j==9&&i>=5&&i<=9)||(i==9&&j!=6&&j!=7&&j!=8)||(j==3&&i!=1&&i!=2&&i!=4&&i!=8&&i!=6)||(j==7&&i!=9&&i!=2&&i!=4&&i!=8&&i!=6))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }

        printf("\n");

    }


    return 0;
}