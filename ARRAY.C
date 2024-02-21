#include <stdio.h>
#include <conio.h>

void main()
{
   int i, j;
   int a[100];
   clrscr();

   for(i=0;i<100;i++)
   {
      a[i] = i + 1;
   }

   for(j=0;j<100;j++)
   {
      if(a[j]%10==0)
      {
	  printf("%d\n", a[j]);
      }
   }

   getch();
}