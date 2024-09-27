#include <stdio.h>
#include "support.h"
/*  Name: Nesar ahmad Hasanzada
    Student number: 041111577
    Lab1
    */

/* Macros for the program defined*/

#define PASSING_GRADE 60
#define NAME_LENGTH 50
#define GRADE_COUNT 3

/* Main function*/
int main(){
    /*Declaring the variables*/
    int num_student, i;


/*Declaring variables*/

    int student_grade[num_student];         /*character string of student grade*/
    char grade[num_student];                /*Array of grade*/

/*Loop through asking student name and grade till num_student*/


/*checks if the student has met course standart*/
    if(student_grade[i] < PASSING_GRADE){
    grade[i] = 'F';
}else{
    grade[i] = 'P';
}
}

/*List the students with their names and grades*/
printf("The list of students.\n");
printf("Student name    |  student_mark     |  grade\n");
for(i=0;i<num_student;i++){
    printf("%s               %d                %c", student_name[i] ,student_grade[i], grade[i]);
    printf("\n");
}
}