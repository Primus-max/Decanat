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
    SUBJECT_COUNT // ���������� ���������
};

const char* subjectNames[] = {
    "������� ����",
    "����������",
    "������",
    "���������� ����",
    "�������",
    "���������",
    "��������",
    "�����",
    "�����������",
    "���������"
};

struct Student {
    
    int id;
    char LastName[20];
    char FirstName[20];
    char MiddleName[20];    

    Subject subjects[SUBJECT_COUNT];
};


void printStudentInfo(const Student& student) {
    cout << "���: " << student.FirstName << endl;
    cout << "��������: " << student.MiddleName << endl;
    cout << "�������: " << student.LastName << endl;
    cout << "������:" << endl;
    for (int i = 0; i < SUBJECT_COUNT; ++i) {
        cout << subjectNames[i] << ": ";
        // ���������, ����� ���� �� ������ ��� �������� ����� ��� �������
        if (strlen(subjectNames[i]) > 0) {
            cout << static_cast<int>(student.subjects[i].grade) << endl;
        }
        else {
            cout << "��� ������" << endl;
        }
    }
}

void printStudents(const Student* students, int count) {
    for (int i = 0; i < count; ++i) {
        cout << "������� #" << i + 1 << ":" << endl;
        printStudentInfo(students[i]);
        cout << endl;
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

    cout << "������� �������� : ";
    cin >> newStudent.LastName;
    cout << "��� �������� : ";
    cin >> newStudent.FirstName;  
    cout << "�������� �������� : ";
    cin >> newStudent.MiddleName;

    return newStudent;
}

void addStudent(Student*& students, int& studentCount,  Student& student) {

    Student* temp = new Student[studentCount + 1];

    for (size_t i = 0; i < studentCount; i++)
        temp[i] = students[i];

    student.id = studentCount;
    temp[studentCount] = student;
    ++studentCount;

    delete[] students;

    students = temp;
}


void rateStudent(Student& student) {
    for (int i = 0; i < SUBJECT_COUNT; ++i) {
        cout  << subjectNames[i] << " : ";
        int grade;
        cin >> grade; 
        student.subjects[i].grade = grade; 
    }
}


// ����� ������ ��� �������
constexpr auto RESET = "\033[0m"      /* ������ */;
constexpr auto YELLOW = "\033[33m";     /* Ƹ���� */;

void printMenu() {
    cout << YELLOW;
    cout << "��� ���������� ��������, ������� 1" << endl;
    cout << "��� ������������ ������ ��������, ������� 2" << endl;
    cout << "��� ������ ������ ���������, ������� 3" << endl;
    cout << "��� ������ ������ ���������� ��������, ������� 4" << endl;
    cout << "��� ������ ���������, ������� 5" << endl;
    cout << RESET; 
}
