#include<stdio.h>
#include<string.h>
int dictionary(char* word)
{

    int i;

    FILE* fp;

    fp = fopen("words_dictionary.txt", "r");

    char ch;
    char str[5000];
    int col  = -1;

     while((fscanf(fp,"%s",str))!=EOF)
     {

         if((strcmp(str, word))==0)
         {

             col=1;
             return col;
            // break;

         }

      }

  return col;


}
