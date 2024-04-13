#pragma once
#include <iostream>
using namespace std;

struct Subject {
    unsigned short grade : 3; 
};

enum SubjectIndex {
    RUSSIAN,
    MATH,
    PHYSICS,
    ENGLISH,
    HISTORY,
    GEOGRAPHY,
    BIOLOGY,
    CHEMISTRY,
    COMPUTER_SCIENCE,
    ART,
    SUBJECT_COUNT // Количество предметов
};

const char* subjectNames[] = {
    "Русский язык",
    "Математика",
    "Физика",
    "Английский язык",
    "История",
    "География",
    "Биология",
    "Химия",
    "Информатика",
    "Искусство"
};

struct Student {
    char LastName[20];
    char FirstName[20];
    char MiddleName[20];    

    Subject subjects[SUBJECT_COUNT];
};


void printStudentInfo(const Student& student) {
    cout << "Имя: " << student.FirstName << endl;
    cout << "Отчество: " << student.MiddleName << endl;
    cout << "Фамилия: " << student.LastName << endl;
    cout << "Оценки:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << subjectNames[i] << ": " << static_cast<int>(student.subjects[i].grade) << endl;
    }
}
float gradeAvg(const Student& student) {
    float avg = 0;

    for (int i = 0; i < 10; ++i) 
        avg += student.subjects[i].grade;

    return avg / SUBJECT_COUNT;
}

Student createStudent() {
    Student newStudent;

    cout << "Фамилия студента : ";
    cin >> newStudent.LastName;
    cout << "Имя студента : ";
    cin >> newStudent.FirstName;  
    cout << "Отчество студента : ";
    cin >> newStudent.MiddleName;

    return newStudent;
}


void rateStudent(Student& student) {
    for (int i = 0; i < SUBJECT_COUNT; ++i) {
        cout  << subjectNames[i] << " : ";
        int grade;
        cin >> grade; 
        student.subjects[i].grade = grade; 
    }
}







// Цвета текста для консоли
constexpr auto RESET = "\033[0m"      /* Дефолт */;
constexpr auto YELLOW = "\033[33m";     /* Жёлтый */;

void printMenu() {
    cout << YELLOW;
    cout << "Для добавления студента, нажмите 1" << endl;
    cout << "Для проставления оценок студенту, нажмите 2" << endl;
    cout << "Для вывода списка студентов, нажмите 3" << endl;
    cout << "Для вывода оценок выбранного студента, нажмите 4" << endl;
    cout << "Для вывода должников, нажмите 5" << endl;
    cout << RESET; 
}
