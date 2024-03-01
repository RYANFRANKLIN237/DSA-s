#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class ClassList {
private:
    vector<Student> students;

public:
    void addStudent(string name, int age) {
        Student newStudent(name, age);
        students.push_back(newStudent);
    }

    int getSize() {
        return students.size();
    }
};

int main() {
    ClassList classList;
    classList.addStudent("John Doe", 18);
    cout << "Size of class list: " << classList.getSize() << endl;
    return 0;
}

