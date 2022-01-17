//Program in C to count the number of vowels and consonants in a string using a pointer. 
#include <stdio.h>
void countVowelsConsonants(char *str,int *vowels,int *consonants);
int main()
{
    char str[100];
    int vowels,consonants;
    printf("\n\n Pointer : Count the number of vowels and consonants in a string :\n"); 
    printf("------------------------------------------------------\n");	
    printf(" Input a string : ");
    scanf("%s",&str);		 
    countVowelsConsonants(str,&vowels,&consonants);
    printf(" The number of vowels in %s is : %d \n",str,vowels);
    printf(" The number of consonants in %s is : %d \n\n",str,consonants);
    return 0;
}
void countVowelsConsonants(char *str,int *vowels,int *consonants)
{
    int i;
    *vowels=0;
    *consonants=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        *vowels=*vowels+1;
        else
        *consonants=*consonants+1;
    }
}