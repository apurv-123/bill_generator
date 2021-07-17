#include <stdio.h>
#include <stdlib.h>


int main()
{
   char ch, file_name[25];
   FILE *fp;

   /*printf("Enter name of a file you wish to see\n");
   gets(file_name);*/

   fp = fopen("bill.txt", "r"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("\n", "bill.txt");

   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

   fclose(fp);
   printf("\n");
   return 0;
}




