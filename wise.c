/*
    write a program to calculate the subject-wise and student-wise totals and store them as a part of the stucture
*/

#include<stdio.h>

int main(){
    int i;
    struct mark{
        int sub1;
        int sub2;
        int sub3;
        int total;
    };

    struct mark student[3] = {
        {45, 60, 23, 0}, {56, 10, 32, 0}, {10, 20, 30, 0}
    };
    struct mark totals;

    for(i=0; i<3; i++){
        // student wise calculation
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
        // subject wise calculation 
        totals.sub1 = totals.sub1 + student[i].sub1;
        totals.sub2 = totals.sub2 + student[i].sub2;
        totals.sub3 = totals.sub3 + student[i].sub3;
        totals.total = totals.total + student[i].total;
    }

    printf("student      totals\n");
    for(i=0; i<3; i++){
        printf("\nstudent[%d]      %d", i+1, student[i].total);
    }

    printf("\n%s      %s\nsubject1       %d\nsubject2       %d\nsubject3        %d\n \nGrand totals     %d", "student", "totals", totals.sub1,totals.sub2,totals.sub3,totals.total);

}