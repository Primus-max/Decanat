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
    char FirstName[20];
    char MiddleName[20];
    char LastName[20];

    Subject subjects[SUBJECT_COUNT];
};


void printStudentInfo(const Student& student) {
    cout << "���: " << student.FirstName << endl;
    cout << "��������: " << student.MiddleName << endl;
    cout << "�������: " << student.LastName << endl;
    cout << "������:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << subjectNames[i] << ": " << static_cast<int>(student.subjects[i].grade) << endl;
    }
}

int gradeAvg(const Student& student) {

}