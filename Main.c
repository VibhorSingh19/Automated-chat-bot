#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{

	char* input;
     printf("Hello I am here for your help Buddy!");

    int i;

	do
    {

		printf("\n>>");
		input=autocorrect();
    	get_Input(input);
	}while(1);


}

void get_Input(char input1[])
{
    char str[500];
    char cmd[50];
    char word[500];
    char sentence[500]=" ";
    char sen[500];
    char sentence1[500];
    char sentence2[500];
    char output[500];
    char output1[500];
    time_t t;
    time(&t);
    char c;
    int i,k=0;



    FILE *fpt;



   fpt=fopen("Input.txt","r");
     int x=0,x1=0;
    while(!feof(fpt))
     {
         fgets(sen,128,fpt);

     }

    fclose(fpt);
    FILE *fp;
    fp=fopen("reply.txt","r");
    strcat(sentence,sen);
    strcat(sentence," ");
    int f=0;
     while(!feof(fp))
     {
          fgets(sentence1,128,fp);
          int size=strlen(sentence1);
          sentence1[size-1] ='\0';

          if(strstr(sentence,"exit"))
          {
             printf("Okay bye have a nice day");
             exit(0);
          }
          else if(strstr(sentence,sentence1))
          {
              int x=0;
              int y=rand() % 3;
              while(x<3)
              {

            fgets(output,128,fp);
            if(x==y)
            {
             printf("%s",output);
             f=1;
             break;
            }

            x++;
              }
              if(f==1)
                break;
          }
          else if(strstr(sen,"meaning_of"))
          {

              char *orig = sen;
              char *res;
              for (res = orig ; *res && *res != ' ' ; res++)
              ;
              if (*res) res++;
              FILE *fp2;
                fp2=fopen("meaning.txt","r");
                while(!feof(fp2))
                {
                    fgets(sentence2,128,fp2);
                    int size2=strlen(sentence2);
                    sentence2[size2-1] ='\0';
                    if(strcmp(res,sentence2)==0)
                    {
                        fgets(output1,128,fp2);
                        printf("%s",output1);
                        f=1;
                    }
                    if(f==1)
                    {
                    break;
                    }
                }

          }

          else if(strcmp("time",sen)==0)
                {
                    printf(ctime(&t));
                    f=1;
                    break;
                }



     }
     if(f==0)
     {
             printf("I am sorry what?");

     }

     fclose(fp);
}
