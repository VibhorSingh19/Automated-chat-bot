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
          if(strcmp(sentence,sentence1)==0)
          //if(isSubstring(sentence,sentence1)!=-1)
          {
              int x=0;
              int y=rand() % 3;
              //printf("%d",y);
              while(x<3)
              {

            fgets(output,128,fp);
            if(x==y)
            {
             printf("%s",output);
             f=1;
            }

            x++;
              }
          }


     }
     if(f==0)
     {
             //system("espeak I--am--sorry--what?");
             printf("I am sorry what?");

     }

     fclose(fp);
        // printf("%s",sentence1);


         //printf("%s",sentence);
        // printf("ssssssssss%saaaaa",str);

     }


     /* if(input1 != NULL)
    {

        if(isSubstring("exit" ,input1)!=-1)
        {
            printf("exit");
            exit(0);
            return 0;
        }
         else if(isSubstring("hi" ,input1)!=-1)
        {
           printf("hi buddy") ;
           return 0;
        }
      else if(isSubstring("open" ,input1)!=-1)
        {

            for(i=5;i<strlen(input1);i++)
            {
                cmd[k]=input1[i];
                k++;
            }

            strcpy(cmd,"dir");
            system(cmd);
            return 0;
          }
*/
        //return 0;










//}
