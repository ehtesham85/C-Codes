#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int id;
public:
    Person() {
        name = "Unknown";
        id = 0;
    }

    Person(string n, int i) {
        name = n;
        id = i;
    }

    void getPersonalInfo() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // Clear newline from input buffer
    }

    void displayPersonalInfo() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }

    virtual ~Person() {
        cout << "Destructor: Person " << name << " removed.\n";
    }
};

class TimeRecord {
protected:
    string inTime;
    string outTime;
public:
    TimeRecord() {
        inTime = "00.00";
        outTime = "00.00";
    }

    void setInTime(const string& time) {
        inTime = time;
    }

    void setOutTime(const string& time) {
        outTime = time;
    }

    string getInTime() const {
        return inTime;
    }

    string getOutTime() const {
        return outTime;
    }
};

class Attendance : public TimeRecord {
protected:
    int lateInMinutes;
    int earlyGoMinutes;
    int shortHours;
    int excessHours;
public:
    Attendance() {
        lateInMinutes = 0;
        earlyGoMinutes = 0;
        shortHours = 0;
        excessHours = 0;
    }

    void calculateLateIn() {
        lateInMinutes = 10;
    }

    void calculateEarlyGo() {
        earlyGoMinutes = 15;
    }

    void calculateShortAndExcessHours() {
        shortHours = 1;
        excessHours = 2;
    }

    void displayAttendanceReport() const {
        cout << "In-Time: " << inTime << endl;
        cout << "Out-Time: " << outTime << endl;
        cout << "Late In: " << lateInMinutes << " min, Early Go: " << earlyGoMinutes << " min" << endl;
        cout << "Short Hours: " << shortHours << endl;
        cout << "Excess Hours: " << excessHours << endl;
    }
};

class Teacher : public Person, public Attendance {
private:
    string subject;
    string department;
public:
    Teacher() {
        // Call base constructor happens automatically
        subject = "None";
        department = "None";
    }

    Teacher(string n, int i, string sub, string dept) {
        name = n;  // Since Person's members are protected, assign directly here
        id = i;
        subject = sub;
        department = dept;
    }

    void getTeacherDetails() {
        getPersonalInfo();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter In-Time: ";
        getline(cin, inTime);
        cout << "Enter Out-Time: ";
        getline(cin, outTime);

        calculateLateIn();
        calculateEarlyGo();
        calculateShortAndExcessHours();
    }

    void displayTeacherInfo() const {
        displayPersonalInfo();
        cout << "Subject: " << subject << endl;
        cout << "Department: " << department << endl;
        displayAttendanceReport();
    }
};

class Admin : public Person {
private:
    string role;
public:
    Admin() {
        role = "none";
    }

    Admin(string n, int i, string r) {
        name = n;
        id = i;
        role = r;
    }

    void manageTeachers() {
        cout << "Managing teacher records" << endl;
    }

    void viewReports() {
        cout << "Viewing reports" << endl;
    }
};

class Department {
private:
    string departmentName;
    int numberOfTeachers;
public:
    Department() {
        departmentName = "none";
        numberOfTeachers = 0;
    }

    void setDepartmentInfo(const string& name, int count) {
        departmentName = name;
        numberOfTeachers = count;
    }

    void displayDepartmentInfo() const {
        cout << "\nDepartment Name: " << departmentName << endl;
        cout << "Number of Teachers: " << numberOfTeachers << endl;
    }
};

class ReportGenerator {
private:
    Teacher t1, t2, t3;
    int teacherCount;
    string reportDate;
public:
    ReportGenerator() {
        teacherCount = 3;
        reportDate = "2025-05-25";
    }

    void inputTeachers() {
        cout<<endl;
		cout << "\tInput for Teacher 1"<<endl;
        t1.getTeacherDetails();
        cout<<endl;
		cout << "\tInput for Teacher 2"<<endl;
        t2.getTeacherDetails();
        cout<<endl;
		cout << "\tInput for Teacher 3"<<endl;
        t3.getTeacherDetails();
    }

    void generateDailyReport() const {
        cout << "\tDaily Attendance Report (" << reportDate << ")"<<endl;
        t1.displayTeacherInfo();
        cout << "----------------------------\n";
        t2.displayTeacherInfo();
        cout << "----------------------------\n";
        t3.displayTeacherInfo();
    }

    void generateMonthlySummary() const {
        cout<<endl;
		cout << "\tMonthly Summary"<<endl;
    }

    void generateUserSelectedDateSummary() const {
        cout<<endl;
		cout << "\tUser-Selected Date Summary"<<endl;
    }

    ~ReportGenerator() {
        cout << "Destructor: ReportGenerator object removed.\n";
    }
};

int main() {
    ReportGenerator report;
    report.inputTeachers();
    report.generateDailyReport();

    return 0;
}
