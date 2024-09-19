#include <stdio.h>
/*  Name: Nesar ahmad Hasanzada
    Student number: 041111577
    Lab1
    */

/* Macros for the program defined*/
#define MAX_STUDENTS 100
#define PASSING_GRADE 60

/* Main function*/
int main(){
    /*Declaring the variables*/
    int num_student, i;

printf("Enter the number of students: ");
scanf("%d" , &num_student);
/*checks if the num_students be higher than maximum volume*/
if(num_student > MAX_STUDENTS){
    printf("Maximum number of students exceeded\n");
    return 1;  
}
/*Declaring variables*/
char student_name[num_student][10];     /*character string of student name with size of 10 characters*/
    int student_grade[num_student];         /*character string of student grade*/
    char grade[num_student];                /*Array of grade*/

/*Loop through asking student name and grade till num_student*/
for(i=0;i<num_student;i++){

printf("Enter student name:");
scanf("%s", student_name[i]);

printf("Enter student grade:");
scanf("%d", &student_grade[i]);
/*checks if the student_grade has a valid value*/
if(student_grade[i] < 1 || student_grade[i] > 100){
    printf("Invalid input, students grade are 1 to 100.\n");
    return 1;
}

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
    printf("%s               %d                 %c", student_name[i] ,student_grade[i], grade[i]);
    printf("\n");
}




}