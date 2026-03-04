// GLG 7th period silly sentence

#include <stdio.h>
#include <string.h>

int main(){
    char place;
    char  verb  ; 
    char feeling; 
    char verb2;
    char mad_lib[1000];
    char replace1[1000];
    char replace2[1000];
    char replace3[1000];

    
    printf("Enter a place:\n");
    scanf("%s", mad_lib);

    printf("Enter a verb:\n");
     scanf("%s", replace1);

    printf("Enter a feeling:\n");
     scanf("%s", replace2);

    printf("Enter a verb:\n");
    scanf("%s", replace3);
    
    printf("%s At the %s in the sun we'll be %s and having some fun and it makes me feel so %s I %s\n", place, verb, feeling, verb2);
    

  
    return 0;

}


