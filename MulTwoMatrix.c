#include <stdio.h>
#include <stdlib.h>

int main()
{
 int A[3][3],B[3][3],C[3][3],i,j,k,sum;
    printf("Enter 9 num for first matrix\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter 9 num for second matrix\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("Multiply of matrix A and B are\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            {
            sum=0;

                for(k=0;k<=2;k++)
                    {
                    sum=sum+ A[i][k] * B[k][j];
                    C[i][j]=sum;
                    }
                printf("%d\t",C[i][j]);

            }
        printf("\n");
    }
    return 0;
}
