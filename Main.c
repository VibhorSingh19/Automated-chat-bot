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
    char c;
    int i,k=0;



    FILE *fpt;



   fpt=fopen("Input.txt","r");
   //printf("%s",str);
     int x=0;
    while((fscanf(fpt,"%s",str))!=EOF)
     {
         //printf("%s",str);
         for(int i=0;i<strlen(str);i++)
         {
             sentence[x++]=str[i];
         }
         //printf("%s",sentence);
        // printf("ssssssssss%saaaaa",str);
         if(strcmp("hi",str)==0)
         {

              switch(rand() % 5) {

                case 1:
                    printf("hi buddy");
                break;
	            case 2:
                    printf("hey whats up");
                break;
                case 3:
                    printf("How are you buddy");
                break;
	            case 4:
                    printf("Hey,long time no chat?");
                break;

                default : /* Optional */
                    printf("I am sorry what?");
                }

         }

         else if(strcmp("howareyou",sentence)==0)
         {
             //printf("%s",str);

              switch(rand() % 5) {

                case 1:
                    printf("Fine what about you");
                break;
	            case 2:
                    printf("Fine as always");
                break;
                case 3:
                    printf("All good");
                break;
	            case 4:
                    printf("I am fine");
                break;

                default : /* Optional */
                    printf("I am sorry what?");
                }

         }
         else if(strcmp("playmusic",sentence)==0)
         {
             //printf("%s",str);

              switch(rand() % 5) {

                case 1:
                    printf("What is your taste in music?");
                break;
	            case 2:
                    printf("What music would you like to listen?");
                break;
                case 3:
                    printf("Which music?");
                break;
	            case 4:
                    printf("Okay which music?");
                break;

                default : /* Optional */
                    printf("I am sorry what?");
                }

         }
         else if(strcmp("bye",str)==0)
         {
             printf("Have a nice day!");
             exit(0);
         }

     }

    fclose(fpt);




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



    }






//}
