#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int numCourses;
    double* grades;
    double gpa;

    Student() {
        cout << "Enter the student's name: ";
        cin >> name;
        cout << "Enter the number of courses for " << name << ": ";
        cin >> numCourses;
        grades = new double[numCourses];
        cout<<"Enter the grade for (Scale from 0-10) "<<endl;
        for (int i = 1; i <= numCourses; i++) {
            cout << "Course "<< i  << ": ";
            cin >> grades[i];
             calculateGPA();
        }

    }

    void calculateGPA() {
        double sum = 0;
        for (int i = 1; i <= numCourses; i++) {
            sum += grades[i];
        }
        gpa = sum / numCourses;
    }


};

int main() {
	cout<<"\n GPA using Array of Objects\n"<<endl;
	int numStudents;
	cout<<"Enter the number of students:";
	cin>>numStudents;
	cout<<endl;
    Student students[numStudents];
		cout<<"\nGPA CALCULATION"<<endl;
    for (int i = 0; i <= numStudents; i++) {
        cout << students[i].name << "'s GPA is: " << students[i].gpa << endl;
    }

    return 0;
}
