#include <iostream>
#include <windows.h>
#include "studets_utils.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    // 1 задание
    //Student student = {"Иван", "Иванович", "Иванов"};
    //student.subjects[RUSSIAN].grade = 4;
    //student.subjects[MATH].grade = 5;
    //student.subjects[PHYSICS].grade = 3;
    //student.subjects[ENGLISH].grade = 5;
    //student.subjects[HISTORY].grade = 4;
    //student.subjects[GEOGRAPHY].grade = 4;
    //student.subjects[BIOLOGY].grade = 3;
    //student.subjects[CHEMISTRY].grade = 4;
    //student.subjects[COMPUTER_SCIENCE].grade = 5;
    //student.subjects[ART].grade = 3;        

    //printStudentInfo(student);    
    //cout << "Средний балл студента :" << gradeAvg(student) << endl;

    // 2 задание
    while (true)
    {
        printMenu();

        Student createdStudent = createStudent();
    }
    
}
