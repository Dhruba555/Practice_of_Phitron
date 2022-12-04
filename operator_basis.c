#include<stdio.h>
int main()
{
    int a,b;
    char ope;
    scanf("%c",&ope);
    scanf("%d %d",&a,&b);
    int m = mathe(ope,a,b);
    printf("%d \n",m);

}
void mathe(char x, int y,int z)
{
    if(y>z)
    {
        switch(x)
        {
        case '+':
            return y+z;
            break;
        case '-':
            return y-z;
            break;
        case '*':
            return y*z;
            break;
        case '/':
            return y/z;
            break;
        }
    }
    else
        {
            switch(x)
            {
            case '+':
                return y+z;
                break;
            case '-':
                return z-y;
                break;
            case '*':
                return y*z;
                break;
            case '/':
                return z/y;
                break;
            }
        }
    }
