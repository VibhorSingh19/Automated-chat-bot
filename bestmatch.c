#include<stdio.h>
#include<string.h>
const char bestmatch(char word[])
{
    int s1=strlen(word);


    int i;
    char* finalword=word;
    FILE* fp;
    int min1=0;
    fp = fopen("words_dictionary.txt", "r");

    char ch;
    char str[500];
    int col  = -1;
    int c=0;
    int min=10000;
    while((fscanf(fp,"%s",str))!=EOF)
     {
         min1=0;
         c=0;

         if(strlen(str)==strlen(word))
         {

          //printf(str);
         for(i=0;i<strlen(str);i++)
         {

          min1=min1+abs((int)(word[i]-str[i]));
          if(str[i]!=word[i])
          {
              c++;
          }

         }
           if(min1<min&&min1<27&&c<2)
          {
             min=min1;
            finalword=str;

             return finalword;

          }

         }



     }
     fclose(fp);
       //  if(c==0)
        // return word;


return word;
    // return word;
}
