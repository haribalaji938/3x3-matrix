#include<stdio.h>
void main()
{
    int mat[12][12];
    int i,j,sum=0;
    printf("Input elements in the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element-[%d],[%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
 
    printf("The matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
 
    printf("The sum of diagonal elements of a given matrix = %d\n",sum);
}
