const char autocorrect()
{   char c;
    char string[500];
    char string2[500];
    int m,n=0;
    int i=0,j=0,k=0,len=0;
    char* finalstring;
while(1)
{
    if(string[i]=='\0')
    {
        n=0;
    }
   c=getch();
   putch(c);


   if(c=='\b')
   {
       if(i>0)
       {
        n++;
       printf(" \b");
        string[i]='\0';
        string2[k]='\0';
       i--;
       k--;
       }
   }
   else if(c=='\r')
   {
        printf("\n");
       // i=0;
       // k=0;

        finalstring=string;
        printf(finalstring);
        return finalstring;
     /*  for(j=0;j<10000;j++)
       {
           string[j]='\0';
           string2[j]='\0';
       }
       */

   }

      else if(c==' '&& n==0)
       {
             k=0;

          if(dictionary(string2)==-1)
           {

               for(j=0;j<strlen(string2);j++)
               {
                   if(i>0)
                    {
                        printf("\b\b ");
                        i--;

                   }
               }

                printf("\b");
               // printf("%s ",string2);
                //bestmatch(string2);
                printf("%s ",bestmatch(string2));
                m=strlen(bestmatch(string2));
                for(j=0;j<m;j++)
                {
                    string[i+j]='\0';
                }

                strncat(string,bestmatch(string2),m);
                for(j=0;j<strlen(bestmatch(string2));j++)
                {

                    //string[i]=string2[j];
                    i++;
                }
                string[i]=' ';
                i++;
            }
            else if(dictionary(string2)==1)
            {
                string[i]=' ';
                i++;
            }
               // printf(string2);
            for(j=0;j<50;j++)
            {
                string2[j]='\0';
            }

       }
       else if(c==' ')
        {
            n=0;
             for(j=0;j<50;j++)
            {
                string2[j]='\0';
            }
       }
       else
       {
            string2[k]=c;
            k++;
            string[i]=c;
            i++;
        }
}
//return string;

}
