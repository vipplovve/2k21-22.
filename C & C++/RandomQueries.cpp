#include <stdio.h>
int main()
{
    int len;
    printf("Enter length of the string: ");
    scanf("%d",&len);
    char arr[len];
    for(int x=0;x<len;x++)
        scanf("%c",&arr[x]);
    int vowel=0,consonant=0;
    for(int x=0;x<len;x++)
        if((arr[x]=='a')||(arr[x]=='e')||(arr[x]=='i')||(arr[x]=='o')||(arr[x]=='u'))
        vowel+=1;
        else
        consonant+=1;

    printf("No of vowels are: %d",vowel);
    printf("\nNo of consonants are: %d",consonant);
    return 0;
}
