
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    float grade, credits;
    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "===== CGPA CALCULATOR =====" << endl;

    cout << "Enter the number of courses: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a valid number of courses." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade points (0-10): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credits;

        if (grade < 0 || grade > 10 || credits <= 0) {
            cout << "Invalid grade or credits!" << endl;
            return 0;
        }

        totalCredits += credits;
        totalGradePoints += grade * credits;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n===== RESULT =====" << endl;
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}
