#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{

	char* input;

	printf("Hello i am here for your help mate");
	do
    {

		printf("\n>>");
      //  gets(autocorrect(input));
	//	printf(autocorrect(input));
	    input = autocorrect();


        //printf(strlen(autocorrect()));
       // printf("a%s",input);
		get_Input(input);

	}while(1);


}
int isSubstring(char* s1, char* s2)
{
    int M = strlen(s1);
    int N = strlen(s2);

    for (int i = 0; i <= N - M; i++) {
        int j;


        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}
void get_Input(char* input)
{
    //printf(input);
    char* word;

    if(input != NULL)
    {
        word="exit";
        if(isSubstring(word ,input)!=-1)
        {
            printf("exit");
            exit(0);
        }
         else if(isSubstring("hi",input)!=-1)
        {
           printf("hi buddy") ;
        }

    }





}
