#include <iostream>
#include <string>

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

         // input of the name of the student
         std::string g_strName ;
         std::cout << "enter the name of the student: ";
         std::cin >> g_strName;
         std::cout << "name: " << g_strName << '\n';

    }
};

class grade
{
public:
    void input_grade()
    {

         // input of mark 1
         std::cout << "enter your first Mark: ";
         std::cin >> g_dblMark1;
         std::cout << "Mark 1 : " << g_dblMark1 << '\n';

         // input of mark 2
         std::cout << "enter your second Mark: ";
         std::cin >> g_dblMark2;
         std::cout << "Mark 2 : " << g_dblMark2 << '\n';

         // input of mark 3
         std::cout << "enter your Third Mark: ";
         std::cin >> g_dblMark3;
         std::cout << "Mark 3 : " << g_dblMark3 << '\n';

    }

    void average_grade_student(double mark_1, double mark_2, double mark_3)
    {

         // give you the result of the average of the 3 mark
         double g_dblAverageMark = (mark_1 + mark_2 + mark_3) / 3;
         std::cout << "the average mark of the student is " << g_dblAverageMark << '\n';

    }
};

void DbAvrgMarkClass(double g_dbAvrgMark1, double g_dbAvrgMark2, double g_dbAvrgMark3)
{

     // give you the average of the class
     // it's would use the 3 average mark of the 3 student
     double dbAvrgMarkClass = (g_dbAvrgMark1 + g_dbAvrgMark2 + g_dbAvrgMark3) / 3;

}

void MainMenu();

void NameMenu()
{

    // object (student)
    student student_1;
    student student_2;
    student student_3;

    // menu to which student want you give a name
    std::cout << "choose which students you will get a name\n";
    std::cout << "\n(1).students 1\n" << "\n(2).students 2\n"
    << "\n(3).students 3 \n";
    std::cout << "Type here: ";
    
    // input of the client -- this will let the client choose which student he want to use
    int input;
    std::cin >> input;
    
    // depend of the input, it's would choose which student would you use
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
    // object (student_grade)
    grade sg_1;
    grade sg_2;
    grade sg_3;
    
    // menu of the grade student
    std::cout << "choose which students they will get a grade\n";
    std::cout << "\n(1). Grade Students 1\n" << "\n(2). Grade Students 2\n" 
    << "\n(3). Gstudents 3 \n";

    // input of the client -- this will let the client choose which student he want to use
    int input;
    std::cin >> input;
    
    // depend of the input, it's would choose which student would you use
    switch (input)
    {
    case 1:
         // its fonction inside the class grade -- its will register the grade of student 1
         sg_1.input_grade();

         // its fonction inside the class grade
         // its will give you a result of the average of the 3 grade you input in input_grade
         sg_1.average_grade_student(g_dblMark1, g_dblMark2, g_dblMark3);

         // its will give you the average of the 3 average grade of the 3 student of the class
         DbAvrgMarkClass(g_dbAvrgMark1, g_dbAvrgMark2, g_dbAvrgMark3);
         system("cls");
         break;
    case 2:
         // its fonction inside the class grade -- its will register the grade of student 2
         sg_2.input_grade();

         // its fonction inside the class grade
         // its will give you a result of the average of the 3 grade you input in input_grade
         sg_2.average_grade_student(g_dblMark1, g_dblMark2, g_dblMark3);

         // its will give you the average of the 3 average grade of the 3 student of the class
         DbAvrgMarkClass(g_dbAvrgMark1, g_dbAvrgMark2, g_dbAvrgMark3);
         system("cls");
         break;
    case 3:
        // its fonction inside the class grade -- its will register the grade of student 3
        sg_3.input_grade();

        // its fonction inside the class grade
        // its will give you a result of the average of the 3 grade you input in input_grade
        sg_3.average_grade_student(g_dblMark1, g_dblMark2, g_dblMark3);

        // its will give you the average of the 3 average grade of the 3 student of the class
        DbAvrgMarkClass(g_dbAvrgMark1, g_dbAvrgMark2, g_dbAvrgMark3);
        system("cls");
        break;
    }

    return MainMenu();

}

void MainMenu()
{
    // Main menu
    std::cout << "1.Student name\n" << "2.Student Grade\n" << "3.Exit\n";
    std::cout << "type here: ";
    
    // input of the client -- this will let the client choose which student he want to use
    int input;
    std::cin >> input;

    // depend of the input, it's would choose which menu would you use
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


