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
        int flag=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
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
            printf("Diagonal Matrix.\n");
        }
        else
        {
            printf("Not Diagonal Matrix.\n");
        }

    }
    else
    {
        printf("Not Diagonal Matrix.\n");
    }

}
