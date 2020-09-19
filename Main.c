#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{

	char* input;
    char es[20]="espeak -s80 -ven+f5 ";
    strcat(es,"Hello_I_am_here_for_your_help_Vibhor!");
    system(es);
    printf("Hello I am here for your help Vibhor!");

    int i;

	do
    {


		printf("\n>>");
		input=autocorrect();
       // printf(input);

        //printf(strlen(autocorrect()));
       // printf("a%s",input);
		get_Input(input);


	}while(1);


}
/*int isSubstring(char* s1, char* s2)
{
    printf(s1);
    printf(s2);
    int M = strlen(s1);
    int N = strlen(s2);
    int i;
    for (int i = 0; i <= N - M; i++)
    {
        int j;


        for (j = 0; j < M; j++)
            {
                if (s2[i + j] != s1[j])
                {
                    break;
                }
            }
        if (j == M)
           {

            return i;
           }
    }

    return -1;
}
*/
void get_Input(char input1[])
{
    char str[500];
   // printf("%s",input1);
    //printf(input);
    char cmd[50];
    char word[500];
    char sentence[500];
    char sentence1[500];
    char output[500];
    char c;
    int i,k=0;



    FILE *fpt;



   fpt=fopen("Input.txt","r");
   //printf("%s",str);
     int x=0,x1=0;
    while(!feof(fpt))
     {
         //printf("%s",str);
         fgets(sentence,128,fpt);
         //printf("%s",sentence);
        // printf("ssssssssss%saaaaa",str);

     }

    fclose(fpt);
    FILE *fp;
    fp=fopen("reply.txt","r");
    strcat(sentence,"\n");
    int f=0;
     while(!feof(fp))
     {


          fgets(sentence1,128,fp);
          //printf("%s",sentence1);
          //printf("%d",strlen(sentence1));
          //printf("%s",sentence);

          //printf("%d",strcmp(sentence,sentence1));


          //break;
          //if(strcmp(sentence,sentence1)==0)

          if(strstr(sentence,"bye"))
          {
            char es[20]="espeak -s80 -ven+f5 ";
            strcat(es,"Okay_bye_have_a_nice_day");
             system(es);
             printf("Okay---bye---have---a---nice---day");
             exit(0);
          }
          else if(strstr(sentence,sentence1))
          {
              int x=0;
              int y=rand() % 3;
              //printf("%d",y);
              while(x<3)
              {

            fgets(output,128,fp);
            if(x==y)
            {
             char es[20]="espeak -s80 -ven+f5 ";
             strcat(es,output);
             system(es);
             printf("%s",output);
             f=1;
             break;
            }

            x++;
              }
          }



     }
     if(f==0)
     {
             system("espeak -s80 -ven+f5 I---am---sorry---what?");
             printf("I am sorry what?");

     }

     fclose(fp);
}
           // printf("%s",sentence1);


         //printf("%s",sentence);
        // printf("ssssssssss%saaaaa",str);


  /*    if(input1 != NULL)
    {

        if(isSubstring(sentence1 ,input1)!=-1)
        {
            printf("exit");
            exit(0);
            return 0;
        }

    }*/



        //return 0;










//}
