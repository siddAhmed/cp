// write a program to calculate the grade of a student according to the specified marks 
// accept the grade and display the range of marks of that grade
#include <stdio.h>
 
int main () {

   /* local variable definition */
   char grade;
   printf("Enter the grade: ");
   scanf("%c", &grade);

   switch(grade) {
      case 'A' :
        printf("You have scored between 85-100\n" );
        break;
      case 'B' :
        printf("You have scored between 60-85\n" );
        break;
      case 'C' :
        printf("You have scored between 40-60\n");
        break;
      case 'D' :
        printf("You have scored between 30-40\n");
        break;
      default :
        printf("Sorry you have failed !\n" );
   }
    
   return 0;
}