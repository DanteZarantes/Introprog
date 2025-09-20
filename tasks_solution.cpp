#include <iostream>
#include <cmath>
using namespace std;

// Task 1: Sum of two numbers
void task1() {
    cout << "Task 1: Sum of two numbers" << endl;
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

// Task 2: Calculate x² + y - z/2 (z must be even)
void task2() {
    cout << "Task 2: Calculate x² + y - z/2" << endl;
    int x, y, z;
    cin >> x >> y >> z;
    int result = x * x + y - z / 2;
    cout << result << endl;
}

// Task 3: Check if x < y < z
void task3() {
    cout << "Task 3: Check if x < y < z" << endl;
    double x, y, z;
    cin >> x >> y >> z;
    if (x < y && y < z) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

// Task 4: Double numbers if a <= b <= c, otherwise use absolute values
void task4() {
    cout << "Task 4: Double or absolute values based on inequality" << endl;
    double a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c) {
        cout << a * 2 << " " << b * 2 << " " << c * 2 << endl;
    } else {
        cout << abs(a) << " " << abs(b) << " " << abs(c) << endl;
    }
}

// Task 5: Find minimum and maximum of three numbers
void task5() {
    cout << "Task 5: Find min and max of three numbers" << endl;
    double x, y, z;
    cin >> x >> y >> z;
    double minVal = min(x, min(y, z));
    double maxVal = max(x, max(y, z));
    cout << minVal << " " << maxVal << endl;
}

// Task 6: Calculate days in a year (leap year check)
void task6() {
    cout << "Task 6: Days in a year" << endl;
    int year;
    cin >> year;
    // Leap year: divisible by 4, but not by 100 unless also by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << 366 << endl;
    } else {
        cout << 365 << endl;
    }
}

// Task 7: Check if first number is multiple of second
void task7() {
    cout << "Task 7: Check if first is multiple of second" << endl;
    int first, second;
    cin >> first >> second;
    if (first % second == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// Task 8: Compare two numbers and show relation
void task8() {
    cout << "Task 8: Compare two numbers" << endl;
    double a, b;
    cin >> a >> b;
    if (a > b) {
        cout << ">" << endl;
    } else if (a < b) {
        cout << "<" << endl;
    } else {
        cout << "=" << endl;
    }
}

// Task 9: Check if three sides can form a triangle
void task9() {
    cout << "Task 9: Triangle possibility check" << endl;
    double x, y, z;
    cin >> x >> y >> z;
    // Triangle inequality: sum of any two sides > third side
    if (x + y > z && x + z > y && y + z > x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

// Task 10: Validate date (day, month, year)
void task10() {
    cout << "Task 10: Date validation" << endl;
    int day, month, year;
    cin >> day >> month >> year;
    
    // Check month validity
    if (month < 1 || month > 12) {
        cout << "No" << endl;
        return;
    }
    
    // Days in each month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Check for leap year February
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        daysInMonth[1] = 29;
    }
    
    // Check day validity
    if (day >= 1 && day <= daysInMonth[month - 1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// Task 11: Simple calculator using switch
void task11() {
    cout << "Task 11: Simple calculator" << endl;
    double a, b;
    char op;
    cin >> a >> op >> b;
    
    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a / b << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator" << endl;
    }
}

int main() {
    int taskNumber;
    cout << "Enter task number (1-11): ";
    cin >> taskNumber;
    
    switch (taskNumber) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        case 8: task8(); break;
        case 9: task9(); break;
        case 10: task10(); break;
        case 11: task11(); break;
        default:
            cout << "Invalid task number. Please enter 1-11." << endl;
    }
    
    return 0;
}