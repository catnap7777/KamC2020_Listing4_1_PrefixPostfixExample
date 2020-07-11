
//From Listing 4.1 (Modified) - Demonstrates Prefix and Postfix Modes; page 63????
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**/
#include <stdio.h>
int a, b;
int year1=1234,year2;

int main (void)
{
    a=b=0;

    //use prefix mode for b, postfix mode for a

    printf("Count up!\n");
    printf("blahblahblahblahblahblahblahblah\n");
    printf("Post    Pre\n");
    printf("     %d      %d\n", a,b);
    printf("%d      %d\n", a++, ++b);
    printf("     %d      %d\n", a,b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);
    printf("%d      %d\n", a++, ++b);

    printf("\nCurrent values of a and b:\n");
    printf("%d      %d\n\n", a,b);

    printf("Count down!\n");
    printf("Post    Pre\n");
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);
    printf("%d      %d\n", a--, --b);

    printf("\nCurrent values of a and b:\n");
    printf("%d      %d\n\n", a,b);

    //to call function calcYear which is listed in main.c line 158
    //it knew to somehow compile both main.c and kam test source.c files in the same
    //project... there can only be one main(void) however....

    //year2 = calcYear(year1);
    //******** calcYear(year1);
    //comes back from function call and does following
    printf("\nYear1 = %d",year1);

    return 0;
}

