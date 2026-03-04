// GLG 7th period silly sentence

#include <stdio.h>
#include <string.h>

int main(){
    char place[100];
    char verb[100]; 
    char feeling[100]; 
    char verb2[100];

    char mad_lib[1000] = "";

    printf("Enter a place:\n");
    scanf("%s", place);

    printf("Enter a verb:\n");
    scanf("%s", verb);

    printf("Enter a feeling:\n");
    scanf("%s", feeling);

    printf("Enter another verb:\n");
    scanf("%s", verb2);

   
    strcat(mad_lib, place);
    strcat(mad_lib, " in the sun we'll be ");
    strcat(mad_lib, verb);
    strcat(mad_lib, " and having some fun and it makes me feel so ");
    strcat(mad_lib, feeling);
    strcat(mad_lib, " I ");
    strcat(mad_lib, verb2);

    printf("%s\n", mad_lib);

    return 0;
}
