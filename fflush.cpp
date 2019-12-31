#include<stdio.h>
int main()
{
char ch;
puts("Enter a character");
ch=getc(stdin);    //here stdin-standard input device
fflush(stdin);
puts("The entered character is:");
putc(ch,stdout);  //here stdout-standard output device
return 0;
}
