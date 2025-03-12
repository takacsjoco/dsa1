#include <stdio.h>

#include "student.h"

int main(void) {
    Student_t student = {
            "John Black",
            "AVHKD56",
            "MAROSVASARHELY",
            1980,3,5,
            MALE,
            7.50
    };
    printStudent(student);
    Student_t student2;
    readStudentDetails(&student2);
    printStudent(student2);

    return 0;
}
