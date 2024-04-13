#pragma once
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
    "Исскуство"
};

struct Student {
    char FirstName[20];
    char MiddleName[20];
    char LastName[20];

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

int gradeAvg(const Student& student) {

}