#include<stdio.h>
int main()
{
    int i,j,row,col;
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    if(row==col)
    {
        int flag=0,x=mat[0][0];
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
                    if(mat[i][j]!=x)
                    {
                        flag=1;
                    }
                    continue;
                }
                if(mat[i][j] != 0)
                {
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            printf("Scalar Matrix.\n");
        }
        else
        {
            printf("Not Scalar Matrix.\n");
        }

    }
    else
    {
        printf("Not Scalar Matrix.\n");
    }

}
