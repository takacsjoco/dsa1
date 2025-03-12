//
// Created by takacs.jozsef on 3/12/2025.
//

#include "student.h"
#include <stdio.h>
#include <process.h>
#include <malloc.h>

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

void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input) {
    if(!freopen(input, "r", stdin)) {
        printf("Beolvasas hiba!");
        exit(-1);
    }
    int n;
    scanf("%d", &n);
    allocateMemoryForStudents(dpStudents, n);
    for (int i = 0; i < n; ++i) {
        readStudentDetails(&(*dpStudents)[i]);
    }
    *numberOfStudents = n;
    freopen("CON", "r", stdin);
}

void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents) {
    *dpStudents = (Student_t *) malloc(numberOfStudents * sizeof(Student_t));
    if(!*dpStudents) {
        printf("Lefoglalas hiba!");
        exit(-1);
    }
}

void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination) {
    for (int i = 0; i < numberOfStudents; ++i) {
        printStudent(pStudents[i]);
    }
}
