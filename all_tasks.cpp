#include <iostream>
#include <cmath>
using namespace std;

// Task 1: 2^n without pow()
int power2(int n) {
    int result = 1;
    for (int i = 0; i < n; i++) result *= 2;
    return result;
}

// Task 2: n!
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

// Task 3: sqrt(1 + sqrt(2 + sqrt(3 + ... + sqrt(n))))
double task3(int n) {
    double result = n;
    for (int i = n - 1; i >= 1; i--) result = sqrt(i + result);
    return result;
}

// Task 4: a(a+1)...(a+n-1)
double task4(double a, int n) {
    double result = 1;
    for (int i = 0; i < n; i++) result *= (a + i);
    return result;
}

// Task 5: 1/(a+1) + 1/(a+2) + ... + 1/(a+n)
double task5(double a, int n) {
    double result = 0;
    for (int i = 1; i <= n; i++) result += 1.0 / (a + i);
    return result;
}

// Task 6: 1/a + 1/a^2 + 1/a^4 + ... + 1/a^(2n)
double task6(double a, int n) {
    double result = 0, power = a;
    for (int i = 1; i <= n; i++) {
        result += 1.0 / power;
        power *= a;
    }
    return result;
}

// Task 7: x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11! + x^13/13!
double task7(double x) {
    double result = x, term = x, sign = -1;
    for (int i = 3; i <= 13; i += 2) {
        term *= x * x / (i * (i - 1));
        result += sign * term;
        sign *= -1;
    }
    return result;
}

// Task 8: (((...((x+a)^2+a)^2+...+a)^2+a)^2+a (n brackets)
double task8(double x, double a, int n) {
    double result = x;
    for (int i = 0; i < n; i++) result = result * result + a;
    return result;
}

// Task 9: (x-2)(x-4)(x-8)...(x-64) / (x-1)(x-3)(x-7)...(x-63)
double task9(double x) {
    double num = 1, den = 1;
    for (int i = 1; i <= 6; i++) {
        num *= (x - (1 << i));
        den *= (x - ((1 << i) - 1));
    }
    return num / den;
}

// Task 10: 1/(1+1/(3+1/(5+...+1/(101+1/103))))
double task10() {
    double result = 1.0 / 103;
    for (int i = 101; i >= 1; i -= 2) result = 1.0 / (i + result);
    return result;
}

// Task 11: x/(x^2+2/(x^2+4/(x^2+8/(x^2+...+256/x^2))))
double task11(double x) {
    double result = 256.0 / (x * x);
    for (int i = 128; i >= 2; i /= 2) result = i / (x * x + result);
    return x / (x * x + result);
}

// Task 12: Sum of 1/i^3 from i=1 to 50
double task12() {
    double result = 0;
    for (int i = 1; i <= 50; i++) result += 1.0 / (i * i * i);
    return result;
}

// Task 13: a1 + a2^2 + ... + a10^10
double task13() {
    double result = 0, a;
    for (int i = 1; i <= 10; i++) {
        cin >> a;
        double power = 1;
        for (int j = 0; j < i; j++) power *= a;
        result += power;
    }
    return result;
}

int main() {
    int choice;
    cout << "Enter task number (1-13): ";
    cin >> choice;
    
    switch (choice) {
        case 1: {
            int n;
            cin >> n;
            cout << power2(n) << endl;
            break;
        }
        case 2: {
            int n;
            cin >> n;
            cout << factorial(n) << endl;
            break;
        }
        case 3: {
            int n;
            cin >> n;
            cout << task3(n) << endl;
            break;
        }
        case 4: {
            double a;
            int n;
            cin >> a >> n;
            cout << task4(a, n) << endl;
            break;
        }
        case 5: {
            double a;
            int n;
            cin >> a >> n;
            cout << task5(a, n) << endl;
            break;
        }
        case 6: {
            double a;
            int n;
            cin >> a >> n;
            cout << task6(a, n) << endl;
            break;
        }
        case 7: {
            double x;
            cin >> x;
            cout << task7(x) << endl;
            break;
        }
        case 8: {
            double x, a;
            int n;
            cin >> x >> a >> n;
            cout << task8(x, a, n) << endl;
            break;
        }
        case 9: {
            double x;
            cin >> x;
            cout << task9(x) << endl;
            break;
        }
        case 10: {
            cout << task10() << endl;
            break;
        }
        case 11: {
            double x;
            cin >> x;
            cout << task11(x) << endl;
            break;
        }
        case 12: {
            cout << task12() << endl;
            break;
        }
        case 13: {
            cout << "Enter 10 real numbers: ";
            cout << task13() << endl;
            break;
        }
        default:
            cout << "Invalid task number" << endl;
    }
    
    return 0;
}