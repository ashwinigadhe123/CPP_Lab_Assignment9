#include <iostream>
#include <string>
using namespace std;

// Single Inheritance
class College {
public:
    string college;

    void collegeInfo() {
        cout << "Enter College Name: ";
        getline(cin, college);
    }

    void showCollege() {
        cout << "SI: " << college << endl;
    }
};

class Department : public College {
public:
    string dept;

    void deptInfo() {
        cout << "Enter Department: ";
        getline(cin, dept);
    }

    void showDept() {
        cout << "Department: " << dept << endl;
    }
};

// Multilevel Inheritance
class University {
public:
    string university;

    void uniInfo() {
        cout << "Enter University Name: ";
        getline(cin, university);
    }
};

class Faculty : public University {
public:
    string faculty;

    void facultyInfo() {
        cout << "Enter Faculty Name: ";
        getline(cin, faculty);
    }
};

class Student : public Faculty {
public:
    string student;

    void studentInfo() {
        cout << "Enter Student Name: ";
        getline(cin, student);
    }

    void showStudent() {
        cout << "University: " << university << endl;
        cout << "Faculty: " << faculty << endl;
        cout << "Student: " << student << endl;
    }
};

// Multiple Inheritance
class Sports {
public:
    string sport;

    void sportsInfo() {
        cout << "Enter Sport Name: ";
        getline(cin, sport);
    }
};

class Cultural {
public:
    string activity;

    void culturalInfo() {
        cout << "Enter Cultural Activity: ";
        getline(cin, activity);
    }
};

class Club : public Sports, public Cultural {
public:
    string club;

    void clubInfo() {
        cout << "Enter Club Name: ";
        getline(cin, club);
    }

    void showClub() {
        cout << "Sport: " << sport << endl;
        cout << "Cultural Activity: " << activity << endl;
        cout << "Club: " << club << endl;
    }
};

// Hierarchical Inheritance
class CollegeBase {
public:
    string notice;

    void baseInfo() {
        cout << "Enter Common Notice: ";
        getline(cin, notice);
    }
};

class Teacher : public CollegeBase {
public:
    string teacher;

    void teacherInfo() {
        cout << "Enter Teacher Name: ";
        getline(cin, teacher);
    }

    void showTeacher() {
        cout << "Notice: " << notice << endl;
        cout << "Teacher: " << teacher << endl;
    }
};

class NonTeaching : public CollegeBase {
public:
    string staff;

    void staffInfo() {
        cout << "Enter Staff Name: ";
        getline(cin, staff);
    }

    void showStaff() {
        cout << "Notice: " << notice << endl;
        cout << "Non-Teaching Staff: " << staff << endl;
    }
};

// Hybrid Inheritance
class Admin {
public:
    string admin;

    void adminInfo() {
        cout << "Enter Admin Name: ";
        getline(cin, admin);
    }
};

class DepartmentA : public Admin {
public:
    string deptA;

    void deptAInfo() {
        cout << "Enter Department A Name: ";
        getline(cin, deptA);
    }
};

class DepartmentB {
public:
    string deptB;

    void deptBInfo() {
        cout << "Enter Department B Name: ";
        getline(cin, deptB);
    }
};

class CombinedDept : public DepartmentA, public DepartmentB {
public:
    string project;

    void combinedInfo() {
        cout << "Enter Combined Project Name: ";
        getline(cin, project);
    }

    void showCombined() {
        cout << "Admin: " << admin << endl;
        cout << "Department A: " << deptA << endl;
        cout << "Department B: " << deptB << endl;
        cout << "Project: " << project << endl;
    }
};

// Main Function
int main() {
    cout << "\\n--- Single Inheritance ---" << endl;
    Department d;
    d.collegeInfo();
    d.deptInfo();
    d.showCollege();
    d.showDept();

    cout << "\\n--- Multilevel Inheritance ---" << endl;
    Student s;
    s.uniInfo();
    s.facultyInfo();
    s.studentInfo();
    s.showStudent();

    cout << "\\n--- Multiple Inheritance ---" << endl;
    Club c;
    c.sportsInfo();
    c.culturalInfo();
    c.clubInfo();
    c.showClub();

    cout << "\\n--- Hierarchical Inheritance ---" << endl;
    Teacher t;
    t.baseInfo();
    t.teacherInfo();
    t.showTeacher();

    NonTeaching n;
    n.baseInfo();
    n.staffInfo();
    n.showStaff();

    cout << "\\n--- Hybrid Inheritance ---" << endl;
    CombinedDept cd;
    cd.adminInfo();
    cd.deptAInfo();
    cd.deptBInfo();
    cd.combinedInfo();
    cd.showCombined();

    return 0;
}

