#include <iostream>
#include <cmath>
using namespace std;

void task1() {
    int x, y;
    cin >> x >> y;
    cout << x + y << endl;
}

void task2() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << x * x + y - z / 2 << endl;
}

void task3() {
    double x, y, z;
    cin >> x >> y >> z;
    if (x < y && y < z) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void task4() {
    double x, y, z;
    cin >> x >> y >> z;
    if (x <= y && y <= z) {
        cout << x * 2 << " " << y * 2 << " " << z * 2 << endl;
    } else {
        cout << abs(x) << " " << abs(y) << " " << abs(z) << endl;
    }
}

void task5() {
    double x, y, z;
    cin >> x >> y >> z;
    cout << min(x, min(y, z)) << " " << max(x, max(y, z)) << endl;
}

void task6() {
    int x;
    cin >> x;
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) {
        cout << 366 << endl;
    } else {
        cout << 365 << endl;
    }
}

void task7() {
    int x, y;
    cin >> x >> y;
    if (x % y == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

void task8() {
    double x, y;
    cin >> x >> y;
    if (x > y) {
        cout << ">" << endl;
    } else if (x < y) {
        cout << "<" << endl;
    } else {
        cout << "=" << endl;
    }
}

void task9() {
    double x, y, z;
    cin >> x >> y >> z;
    if (x + y > z && x + z > y && y + z > x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

void task10() {
    int x, y, z;
    cin >> x >> y >> z;
    if (y < 1 || y > 12) {
        cout << "No" << endl;
        return;
    }
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y == 2 && ((z % 4 == 0 && z % 100 != 0) || (z % 400 == 0))) {
        daysInMonth[1] = 29;
    }
    if (x >= 1 && x <= daysInMonth[y - 1]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

void task11() {
    double x, z;
    char y;
    cin >> x >> y >> z;
    switch (y) {
        case '+':
            cout << x + z << endl;
            break;
        case '-':
            cout << x - z << endl;
            break;
        case '*':
            cout << x * z << endl;
            break;
        case '/':
            cout << x / z << endl;
            break;
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