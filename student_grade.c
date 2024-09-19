#include <stdio.h>


#define MAX_STUDENTS 100
#define PASSING_GRADE 60

int main(){
    int num_student, i;
    int count = 0;
    
printf("Enter the number of students: ");
if(scanf("%d" , &num_student) > MAX_STUDENTS){
    printf("Maximum number of students exceeded");
}
   char student_name[num_student][10];
    int student_grade[num_student];
    char grade;
for(i=0;i<num_student;i++){

printf("Enter student name:");
scanf("%s", student_name[i]);

printf("Enter student grade:");
scanf("%d", &student_grade[i]);
count++;
}

printf("The list of students.\n");
printf("Student name    student_mark    grade\n");
for(i=0;i<num_student;i++){
    if(student_grade < PASSING_GRADE){
    grade = 'F';
}else{
    grade = 'P';
}
    printf("%s               %d                 %c", student_name[i] ,student_grade[i], grade);
    printf("\n");
}




}