#pragma once
#include <iostream>
#include <string>


using namespace std;



class Human {
protected:
    string name;
    int age;

public:
    Human() = default;
    Human(const string n, int a) : name(n), age(a) {}


    void Input()
    {
        cout << "Input name: ";
        cin >> name;
        cout << "Input age: ";
        cin >> age;
    }

    void Print() const {
        cout << "Human: Name - " << name << ", Age - " << age << std::endl;
    }
};




class University {
protected:
 string universityName;
 string adm;
 string faculty;


public:
    University() = default;
    University(const string uniName, string adm,
    string faculty) : universityName(uniName) ,adm(adm),faculty(faculty)
    {}

 

    void Print() const {
       cout << "University: " << universityName << endl;
       cout << "ADM: " << adm << endl;
       cout << "Faculty: " << faculty << endl;

    }
    void Input() {
        cout << "Input universityName: ";
        cin >> universityName;
        cout << "Input adm: ";
        cin >> adm;
        cout << "Input faculty: ";
        cin >> faculty;
    }
};




class Student : public Human, public University {
private:
    string group;
    int* grades;

public:
    Student() = default;
    Student(const string n, int a, const string uniName,string adm, const string faculty, const string group,int* grades)
        : Human(n, a), University(uniName, adm, faculty), group(group)
    {
        this->grades = new int[6];
        for (int i = 0; i < 6; ++i) {
            this->grades[i] = grades[i];
        }
    }
    ~Student() {
        if (grades != nullptr) {
            delete[] grades;
        }
    }


    void Print () const {
        Human::Print();
        University::Print();
        cout << "Student Group: " << group << endl;
        cout << "Grades: ";
        for (int i = 0; i < 5; ++i) {
            cout << grades[i] << " ";
        }
        cout << endl;
    }
    void Input() {
        Human::Input();
        University::Input();
        cout << "Input student group: ";
        cin >> group;

        grades = new int[6];
        cout << "Input grades (6 subjects): ";
        for (int i = 0; i < 6; ++i) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> grades[i];
        }
    }
};
