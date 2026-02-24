// GLG string notes 

#include <stdio.h>
#include <string.h>

int main(){

//string example 
char subject[]= "computer science";
char school[] = "UCAS";
char book[50];

printf("what is yout fav book: ");
// scanf("%s", &book);
scanf("%s", &book);

printf("this is a %s at %s, It is awesome\n", subject, school);
printf( "%s is a lame book", book);

printf("this is %s at %s. It is awesome!\n", subject, school);

// concantennation 
char first[] = "katie";
char last[] = "llanos";
char full_name[20];

first[0] = 'k';
first[1] = 'a';
first[2] = 't';
first[3] = 'i';
first[4] = 'e';
first[5] = ' ';


strcat(first, " ");
strcat(first, last);
printf("%s\n", first);

printf("%s\n", full_name);

// length of string
printf("%lu\n", strlen(full_name));

return 0;

}
