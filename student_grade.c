#include <stdio.h>


#define MAX_STUDENTS 100
#define PASSING_GRADE 60

int main(){
    int num_student;
    int count = 0;
printf("Enter the number of students: ");
if(scanf("%d" , &num_student) > MAX_STUDENTS){
    printf("Maximum number of students exceeded");
}
while(count < num_student){
    char student_name[10];
    int student_grade;
    
printf("Enter student name:");
scanf("%s", student_name);

printf("Enter student grade:");
scanf("%d", &student_grade);
count++;
}

if(student_grade < PASSING_GRADE){
    printf("Student has not met the course standard.");
}else{
    printf("Student has met the course standard.");
}


}