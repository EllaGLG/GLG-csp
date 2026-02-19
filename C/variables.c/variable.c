// This is a comment in C!
#include <stdio.h> // Lets us use inputs and outputs 


int main(){
    //variables examples
    int age = 9999;
    const float gpa = 3.98;
    char grade = 'A';  // single letter uses single quotes
    char name[] = "Erick";
    int number;
    char user[50];

    printf("tell me your name\n");
    scanf("%s", &user);

    printf("what is your fav number?");
    scanf("%d", &number);

    printf("your  number is: %d\n", user, number);
    printf("It worked!\n");
    printf("%d\n", age);
    printf("your GPA is %f\n", gpa);
     printf("you  have a %c incomputer science\n", grade);
     return 0; //required last line in your main funtion

}