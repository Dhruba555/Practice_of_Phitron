#include<stdio.h>
int main()
{
   int matrix[3][3];
   int i,j = 0;
   int s,s1,s2,s3;
   int flag = 0;

   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++)
         scanf("%d", &matrix[i][j]);
   }

   // primary diagonal elements
   s = 0;
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         if (i == j)
            s = s + matrix[i][j];
      }
   }

   // secondary diagonal elements
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         if ((i+j)==4)
            s3 = s3 + matrix[i][j];
      }
      if (s == s3)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }


   // rows
   for (i = 0; i < 3; i++) {
      s1 = 0;
      for (j = 0; j < 3; j++) {
         s1 = s1 + matrix[i][j];
      }
      if (s == s1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   // columns
   for (i = 0; i < 3; i++) {
      s2 = 0;
      for (j = 0; j < 3; j++) {
         s2 = s2 + matrix[j][i];
      }
      if (s == s2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   if (flag == 1)
      printf("\nYES");
   else
      printf("\nNO");

   return 0;
}
