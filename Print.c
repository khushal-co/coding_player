#include<stdio.h>
/*
name : khushal
date : 13/12/2020
*/
int main()
{
    char word[1000];
    int num;
    int zero=0;

    printf("Hello world!\n");
    printf("enter your word :");
    scanf("%s",&word);
    
    printf("your word is %s\n",word);

    printf("how many time print:");
    scanf("%d",&num);
    do
    {
      zero=zero+1;
      printf("%s\n",word);
    } while(zero<num);


    return 0;
}
