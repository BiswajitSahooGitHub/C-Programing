#include<stdio.h>
char get_char_from_modem(void)
{
    char ch;
    ch = read_modem();
    return (ch & 127);
}