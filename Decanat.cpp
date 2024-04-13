#include <iostream>
#include <windows.h>
#include "studets_utils.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Student student = {"Иван", "Иванович", "Иванов"};
    student.subjects[RUSSIAN].grade = 4;
    student.subjects[MATH].grade = 5;
    student.subjects[PHYSICS].grade = 3;
    
    // Установите оценки для остальных предметов по аналогии

    printStudentInfo(student);
    
}
