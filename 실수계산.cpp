#include <stdio.h>

   int main()
   {
      float floatvar;
      double doublevar;

   /* Print double constant. */ 
      printf("89.95 = %f\n", 89.95);      // 89.95 = 89.950000

   /* Printf float constant */ 
      printf("89.95 = %f\n", 89.95F);     // 89.95 = 89.949997

   /*** Use double constant. ***/ 
      floatvar = 89.95;
      doublevar = 89.95;

      printf("89.95 = %f\n", floatvar);   // 89.95 = 89.949997
      printf("89.95 = %lf\n", doublevar); // 89.95 = 89.950000

   /*** Use float constant. ***/ 
      floatvar = 89.95f;
      doublevar = 89.95f;

      printf("89.95 = %f\n", floatvar);   // 89.95 = 89.949997
      printf("89.95 = %lf\n", doublevar); // 89.95 = 89.949997
      
      return 0; 
   }
