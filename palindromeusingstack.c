#include<stdio.h>
char s[1000];
    void push(char);
    void palindrome(char[]);
    char pop();
    char ch;
    int top;
int main()
{
    top=-1;
    printf("Enter the string=\n");
    gets(s);
    palindrome(s);
}
void palindrome(char s[1000])
{
    int n;
    n=strlen(s);
    int i=0;
    while(i<(n/2)-1)
    {
     ch=s[i];
     i++;
    }
}
