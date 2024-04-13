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

    Student createdStudent;
    int STUDENT_COUNT = 0;
    Student* students = new Student[STUDENT_COUNT];

    // 2 задание
    while (true)
    {
        printMenu();        
        
        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            createdStudent = createStudent();
            cout << "Хотите проставить оценки для этого студента? (1 - Да, 0 - Нет): ";
            int choice;
            cin >> choice;
            if (choice == 1) 
                rateStudent(createdStudent); 
            addStudent(students, STUDENT_COUNT, createdStudent);            
            break;
        case 2:
            rateStudent(createdStudent);
            break;
        case 3:
            printStudents(students, STUDENT_COUNT);
            break;
        case 4:
            cout << "Чтобы вывести оценки студента, укажите его id :";
            int id;
            cin >> id;
            cout << endl;
            printStudentInfo(students[id]); // Да знаю, что надо было искать по фамилии, но время не ждёт)
            break;
        case 5:
            printDebtors(students, STUDENT_COUNT);
            break;
        default:
            cout << "Неправильный ввод. Попробуйте снова." << endl;
        }      
        
    }
    
}
