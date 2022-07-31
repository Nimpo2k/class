#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

double g_dblMark1{};
double g_dblMark2{};
double g_dblMark3{};

double g_dblAverageMark{};

double g_dbAvrgMark1{};
double g_dbAvrgMark2{};
double g_dbAvrgMark3{};

const char g_strName{};

class student
{
public:

    void information_student()
    {

        string g_strName ;
        cout << "enter the name of the student: ";
        cin >> g_strName;
        cout << "name: " << g_strName << endl;

    }
};

class grade
{
public:
    void input_grade()
    {

        cout << "enter your first Mark: ";
        cin >> g_dblMark1;
        cout << "Mark 1 : " << g_dblMark1 << '\n';

        cout << "enter your second Mark: ";
        cin >> g_dblMark2;
        cout << "Mark 2 : " << g_dblMark2 << '\n';

        cout << "enter your Third Mark: ";
        cin >> g_dblMark3;
        cout << "Mark 3 : " << g_dblMark3 << '\n';

    }

    void average_grade_student(double mark_1, double mark_2, double mark_3)
    {

        double g_dblAverageMark = (mark_1 + mark_2 + mark_3) / 3;
        cout << "the average mark of the student is " << g_dblAverageMark << '\n';

    }
};

void DbAvrgMarkClass(double g_dbAvrgMark1, double g_dbAvrgMark2, double g_dbAvrgMark3)
{

    double dbAvrgMarkClass = (g_dbAvrgMark1 + g_dbAvrgMark2 + g_dbAvrgMark3) / 3;

}

void MainMenu();

void NameMenu()
{

    //object (student)
    student student_1;
    student student_2;
    student student_3;

    // menu to which student want you give a name
    cout << "choose which students you will get a name\n";
    cout << "\n(1).students 1\n" << "\n(2).students 2\n" << "\n(3).students 3 \n";
    cout << "Type here: ";
    int input;
    cin >> input;
    // name of the student 
    switch (input)
    {
    case 1:
        student_1.information_student();
        system("cls");
        break;
    case 2:
        student_2.information_student();
        system("cls");
        break;
    case 3:
        student_3.information_student();
        system("cls");
        break;
    }

    return MainMenu();

}


void GradeMenu()
{
    //object (average_grade_student)
    grade ags_1;
    grade ags_2;
    grade ags_3;
    cout << "choose which students they will get a grade\n";
    cout << "\n(1).students 1\n" << "\n(2).students 2\n" << "\n(3).students 3 \n";

    int input;
    cin >> input;
    // grade of the student 
    switch (input)
    {
    case 1:
        ags_1.input_grade();
        ags_1.average_grade_student(g_dblMark1, g_dblMark2, g_dblMark3);
        DbAvrgMarkClass(g_dbAvrgMark1, g_dbAvrgMark2, g_dbAvrgMark3);
        system("cls");
        break;
    case 2:
        ags_2.input_grade();
        ags_2.average_grade_student(g_dblMark1, g_dblMark2, g_dblMark3);
        DbAvrgMarkClass(g_dbAvrgMark1, g_dbAvrgMark2, g_dbAvrgMark3);
        system("cls");
        break;
    case 3:
        ags_3.input_grade();
        ags_3.average_grade_student(g_dblMark1, g_dblMark2, g_dblMark3);
        DbAvrgMarkClass(g_dbAvrgMark1, g_dbAvrgMark2, g_dbAvrgMark3);
        system("cls");
        break;
    }

    return MainMenu();

}

void MainMenu()
{
    cout << "1.Student name\n" << "2.Student Grade\n" << "3.Exit\n";
    cout << "type here: ";
    int input;
    cin >> input;

    switch (input)
    {
    case 1:
        NameMenu();
        break;
    case 2:
        GradeMenu();
        break;
    case 3:
    system("exit");
    break;
    }
}


int main()
{
    MainMenu();
}


