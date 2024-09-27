#include <stdio.h>
#include "support.h"


void num_of_students(){
printf("Enter the number of students: ");
scanf("%d" , &num_student);

/*checks if the num_students be higher than maximum volume*/
if(num_student > MAX_STUDENTS){
    printf("Maximum number of students exceeded\n Try Again!\n");
    num_of_students();  
}
}


void student_grades(){
    char student_name[num_student][10];     /*character string of student name with size of 10 characters*/
    int count = 1;
for(i=0;i<num_student;i++){

printf("Enter student name:");
scanf("%s", student_name[i]);
while (count <= 3){

printf("Enter student grades:");
scanf("Enter grade %d for %s : %d",&count, &student_name, &student_grade[i]);
count++;

/*checks if the student_grade has a valid value*/
if(student_grade[i] < 0 || student_grade[i] > 100){
    printf("Invalid input, students grade are 0 to 100.\n");
    student_grades();
}
}

}
}
