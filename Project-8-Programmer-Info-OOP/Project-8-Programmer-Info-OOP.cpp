#include <iostream>
using namespace std;

class clsPerson
{
    int _ID = 0;
    string _FirstName = "";
    string _LastName = "";
    string _FullName = "";
    string _Email = "";
    string _Phone = "";

public:
    clsPerson(int ID, string FirstName, string LastName, string FullName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _FullName = FullName;
        _Email = Email;
        _Phone = Phone;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void SetFullName(string FullName)
    {
        _FullName = FullName;
    }

    void SetEmail(string FullName)
    {
        _FullName = FullName;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    int GetID()
    {
        return _ID;
    }

    string GetFistName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    string GetEmail()
    {
        return _Email;
    }

    string GetPhone()
    {
        return _Phone;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n********************************";
        cout << "\nID         : " << _ID;
        cout << "\nFirst Name : " << _FirstName;
        cout << "\nLast Name  : " << _LastName;
        cout << "\nFull Name  : " << GetFullName();
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\n********************************\n";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email : " << _Email;
        cout << "\nSubject : " << Subject;
        cout << "\nBody : " << Body << endl;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS message sent successfully to phone : " << _Phone;
        cout << "\n" << TextMessage << endl;
    }
};

class clsEmployee :public clsPerson
{
    string _Title = "";
    string _Department = "";
    float _Salary = 0;

public:

    clsEmployee(int ID, string FirstName, string LastName, string FullName, string Email, string Phone ,string Title,string Department,float Salary )
        :clsPerson(ID,FirstName,LastName,FullName, Email,Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }
    void SetTitle(string Title)
    {
        _Title = Title;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
    }

    void SetSalary(float Salary)
    {
        _Salary = Salary;
    }

    string GetTitle()
    {
        return _Title;
    }

    string GetDepartment()
    {
        return _Department;
    }

    float GetSalary()
    {
        return _Salary;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n********************************";
        cout << "\nID         : " << GetID();
        cout << "\nFirst Name : " << GetFistName();
        cout << "\nLast Name  : " << GetLastName();
        cout << "\nFull Name  : " << GetFullName();
        cout << "\nEmail      : " << GetEmail();
        cout << "\nPhone      : " << GetPhone();
        cout << "\nTitle      : " << _Title;
        cout << "\nDepartment : " << _Department;
        cout << "\nSalary     : " << _Salary;
        cout << "\n********************************";
    }

};

class clsProgrammer : public clsEmployee
{
    string _MainProgrammingLanguage = "";
public:

    clsProgrammer(int ID, string FirstName, string LastName, string FullName, string Email, string Phone, string Title, string Department, float Salary, string MainProgrammingLanguage)
        :clsEmployee( ID, FirstName, LastName, FullName, Email, Phone, Title , Department, Salary)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    void SetMainProgrammingLanguage(string MainProgrammingLanguage)
    {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    string GetMainProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n************************************************";
        cout << "\nID                        : " << GetID();
        cout << "\nFirst Name                : " << GetFistName();
        cout << "\nLast Name                 : " << GetLastName();
        cout << "\nFull Name                 : " << GetFullName();
        cout << "\nEmail                     : " << GetEmail();
        cout << "\nPhone                     : " << GetPhone();
        cout << "\nTitle                     : " << GetTitle();
        cout << "\nDepartment                : " << GetDepartment();
        cout << "\nSalary                    : " << GetSalary();
        cout << "\nMain Programming Language : " << _MainProgrammingLanguage;
        cout << "\n************************************************";
        cout << endl;
    }

};

int main()
{
    clsProgrammer Programmer1(100030, "Mohamed", "Ibrahim", "Software Developer", "MyEmail@gmail.com", "+20.........", "Software Developer", "Computer Science", 5000, "C++");
    Programmer1.Print();

    Programmer1.SendEmail("Hi", "How are you?");

    Programmer1.SendSMS("How are you?");


    system("pause>0");
    return 0;



}