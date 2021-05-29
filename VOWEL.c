#include<stdio.h>
#include<conio.h>
    int main()
{
    char ch;
    clrscr();
    printf("\n enter the charecter");
    scanf("%c",&ch);
    switch(ch)
{
    case 'a':
    printf("\n its a vowel=%c",ch);
    break;
    case 'e':
    printf("\n its a vowel=%c",ch);
    break;
    case 'i':
    printf("\n its a vowel=%c",ch);
    break;
    case 'o':
    printf("\n its a vowel=%c",ch);
    break;
    case 'u':
    printf("n its a vowel=%c",ch);
    break;
    default:
    printf("\n entered charecter is not a vowel=%c",ch);
}
    getch();
    return 0;
}