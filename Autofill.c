#include<stdio.h>
const char autofill(char word[],int c)
{
    int j;
    FILE *fp;
    char* finalword=word;;
    fp = fopen("words_dictionary.txt", "r");
    char str[500];

    while((fscanf(fp,"%s",str))!=EOF)
     {


        if(strlen(str)>3)
        {

         if((strncmp(word,str,strlen(word)))==0)
         {

             if(c==0)
             {
                 finalword=str;
               //printf("%s ",str);

               return finalword;
             }
            else if(c==1)
            {
                for(j=0;j<strlen(str);j++)
                {
                    printf(" \b\b");
                }
            }
            c--;

            // break;

         }
        }
      }


}
