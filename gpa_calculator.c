#include<stdio.h>

    int main(){
    int courses, i;
    float total_points = 0.0, gpa;

   printf("\tHow many modules do you have this semester ( Enter a number ): ");
   scanf("%d", &courses);

   for(i = 1; i <= courses; i++){
    char grade[3];
    float points = 0.0;

   printf("\tEnter the grade for %d course as ( A, B+, B, C, D, F ): ", i);
   scanf("%s", grade);

   if(grade[0] == 'A') {
      points = 5.0;
   }else if(grade[0] == 'B') {
       if(grade[1] == '+') {
         points = 4.0;
        }
       else {
         points = 3.0;
        }
   }else if(grade[0] == 'C') {
        points = 2.0;
   }else if(grade[0] == 'D') {
        points = 1.0;
   }else if(grade[0] == 'F') {
        points = 0.0;
   }else{
     printf("\nInvalid grade entered.\n");
     i--;
     continue;
   }

    total_points += points;
   }
    gpa = total_points / courses;
     printf("\n\n");
     printf("\t\n\tYOUR GPA IS: %.2f", gpa);

    return 0;
  }
