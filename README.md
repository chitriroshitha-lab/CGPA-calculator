# CGPA Calculator in C++

## About the Project
The CGPA Calculator is a simple C++ program that calculates a student's CGPA based on the grade points and credit hours of each course.

This project is useful for students who want to calculate their academic performance easily.

## Features
- Takes the number of courses as input.
- Accepts grade points for each course.
- Accepts credit hours for each course.
- Calculates total credits.
- Calculates total weighted grade points.
- Displays the final CGPA.
- Validates grade points and credit hours.

## Technologies Used
- **Programming Language:** C++
- **Code Editor:** Visual Studio Code
- **Compiler:** GCC (g++)

## Formula

CGPA is calculated using the following formula:

CGPA = Total Grade Points ÷ Total Credits

Where:

Total Grade Points = Sum of (Grade Points × Credit Hours)

## How to Run the Program

### Step 1: Compile the code
Open the VS Code terminal and run:

```bash
g++ cgpa.cpp -o cgpa
```

### Step 2: Execute the program

On Windows, run:

```powershell
.\cgpa.exe
```

### Step 3: Enter the details
- Enter the number of courses.
- Enter the grade points for each course (0–10).
- Enter the credit hours for each course.
- View the calculated CGPA.

## Sample Output

```text
===== CGPA CALCULATOR =====
Enter the number of courses: 3

Course 1
Enter grade points (0-10): 9
Enter credit hours: 4

Course 2
Enter grade points (0-10): 8
Enter credit hours: 3

Course 3
Enter grade points (0-10): 10
Enter credit hours: 2

===== RESULT =====
Total Credits: 9
Total Grade Points: 86
Your CGPA is: 9.55556
```

## Project Structure

```text
CGPA-Calculator/
├── cgpa.cpp
└── README.md
```

## Learning Outcomes
- Understanding C++ basics.
- Using loops and conditional statements.
- Working with variables and user input.
- Applying mathematical formulas.
- Learning basic project development.

## Future Improvements
- Display CGPA rounded to two decimal places.
- Store student details.
- Calculate CGPA across multiple semesters.
- Add a graphical user interface (GUI).

## Author
Student Project – C++ Programming

## License
This project is available for educational and learning purposes.
