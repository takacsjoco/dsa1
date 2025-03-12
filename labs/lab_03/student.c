//
// Created by takacs.jozsef on 3/12/2025.
//

#include "student.h"
#include "student.h"

#include <stdio.h>

void printStudent(Student_t student) {
    printf("Nev: %s\n",student.name);

    printf("\nSzuletesi datum: %3d%3d%3d\n",student.birthDate.year,student.birthDate.month,student.birthDate.day);

    printf("\nNeptun: %s",student.neptun);

    printf("\nSzuletesi hely: %s\n",student.birthPlace);

    printf("\nNem: %d\n",student.gender); //modositas

    printf("\nVizsgajegy: %.2f",student.examResult);
}
void readStudentDetails(Student_t *pStudent) {
    scanf("%s",pStudent->name);
    //scanf("%s",(*pStudent).name);

    scanf("%d",&pStudent->gender);
    scanf("%d",&pStudent->birthDate);
}