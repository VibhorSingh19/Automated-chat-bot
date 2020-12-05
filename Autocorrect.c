#include<stdio.h>


const char autocorrect()
{   char c;
    char* string3='\0';
    char string[500];
    char string2[500];
    int m,n=0,count=0;;
    int i=0,j=0,k=0,len=0,s;
    char* finalstring;

    for(j=0;j<500;j++)
        {
            string[j]='\0';
            string2[j]='\0';
        }


while(1)
{
    if(string[i]=='\0')
    {
        n=0;
    }

   c=getch();
   //putch(c);
if(c!='\t')
    {
        putch(c);
        count=0;
    }

   if(c=='\t')
   {

       if(strlen(string2)>0)
       {
        if(count==0)
        {


            for(j=0;j<strlen(string2);j++)
            {
                if(i>=0)
                {
                    printf("\b \b");
                    i--;
                }


            }
            for(j=0;j<strlen(string2);j++)
            {

                if(i>=0)
                {
                string[i+j]='\0';

                }
            }

        }
        else if(count>0)
        {


                for(j=0;j<s;j++)
                {
                    if(i>0)
                    {
                        i--;
                    }
                }
                for(j=0;j<s;j++)
                {

                    if(i>=0)
                    {
                        string[i+j]='\0';

                    }


                }

        }

      string3=autofill(string2,count);
        printf("%s",string3);


         s=strlen(string3);

      strncat(string,string3,s+1);
      // printf("\n%s\n",string);


      for(j=0;j<s;j++)
      {
          i++;
      }



       count++;

       }
   }






 else if(c=='\b')
   {
       if(i>0)
       {
        n++;
       printf(" \b");
        string[i]='\0';
        for(j=0;j<50;j++)
        {
            string2[j]='\0';
        }

       i--;
       string[i]='\0';
       k--;
       }
       else
        {
            printf(">");
        }
   }







   else if(c=='\r')
   {
        printf("\n");
       // i=0;
       // k=0;
        finalstring='\0';
        finalstring=string;

      //  printf(finalstring);


    FILE *fptr;
    fptr=fopen("Input.txt","w");

	fprintf(fptr,"%s",string);


        fclose(fptr);


       for(j=0;j<1000;j++)
       {
           string[j]='\0';
           string2[j]='\0';

       }

       return finalstring;

   }

   else if(c==' '&& n==0)
   {
          k=0;
          if(strlen(string2)=='\0')
          {
              //printf(" ");
              string[i]=' ';
              i++;
          }

          else if(dictionary(string2)==-1)
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
       else if(c==' ' && n>0)
        {
            n=0;
             for(j=0;j<50;j++)
            {
                string2[j]='\0';
            }
             string[i]=' ';
            i++;
            printf(" ");
       }
       else if(n==0)
       {
            string2[k]=c;
            k++;
            string[i]=c;
            i++;
        }
        else if(n>0)
        {
            string[i]=c;
            i++;
            for(j=0;j<50;j++)
            {
            string2[j]='\0';
            }

        }
}
//return string;

}
