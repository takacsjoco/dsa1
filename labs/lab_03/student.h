//
// Created by takacs.jozsef on 3/12/2025.
//

#ifndef DSA1_STUDENT_H
#define DSA1_STUDENT_H
#ifndef STUDENT_H
#define STUDENT_H

enum Gender {FEMALE,MALE};

typedef struct Date {
    int year,month,day;
}Date_t;

typedef struct Student {
    char name[25];
    char neptun[8];
    char birthPlace[25];
    Date_t birthDate;
    enum Gender gender;
    float examResult;
}Student_t;
//* Prints all details of a student
//* @param student
//*/
void printStudent(Student_t student);

void readStudentDetails(Student_t *pStudent);
/**
1
* Prints all details of a student
* @param student
*/
#endif //STUDENT_H
#endif //DSA1_STUDENT_H
