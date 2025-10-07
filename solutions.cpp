#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

// Task 1: Numbers before -1
void task1() {
    vector<int> nums;
    int x;
    while (cin >> x && x != -1) {
        nums.push_back(x);
    }
    cout << nums.size() << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

// Task 2: Reverse Order Square Roots
void task2() {
    vector<double> nums;
    double x;
    while (cin >> x && x != 0) {
        nums.push_back(x);
    }
    cout << nums.size() << endl;
    for (int i = nums.size() - 1; i >= 0; i--) {
        cout << sqrt(nums[i]) << endl;
    }
}

// Task 3: Find the Minimum Element
void task3() {
    int n;
    cin >> n;
    int min_val = 1001;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < min_val) min_val = x;
    }
    cout << min_val << endl;
}

// Task 4: Find the Index of the Minimum Element
void task4() {
    int n;
    cin >> n;
    int min_val = 1001, min_idx = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < min_val) {
            min_val = x;
            min_idx = i;
        }
    }
    cout << min_idx << endl;
}

// Task 5: Find number of A
void task5() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (char c : s) {
        if (c == 'A') count++;
    }
    cout << count << endl;
}

// Task 6: Sorting
void task6() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

// Task 7: Time Sorting
void task7() {
    int n;
    cin >> n;
    vector<vector<int>> times(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        cin >> times[i][0] >> times[i][1] >> times[i][2];
    }
    sort(times.begin(), times.end());
    for (auto& time : times) {
        cout << time[0] << " " << time[1] << " " << time[2] << endl;
    }
}

// Task 8: Prime Numbers
void task8() {
    int n;
    cin >> n;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) cout << i << " ";
    }
    cout << endl;
}

// Task 9: Minimum in a Table
void task9() {
    int n, m;
    cin >> n >> m;
    int min_val = 1001;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (x < min_val) min_val = x;
        }
    }
    cout << min_val << endl;
}

// Task 10: Diagonals
void task10() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int main_diag = 0, sec_diag = 0;
    for (int i = 0; i < n; i++) {
        main_diag += matrix[i][i];
        sec_diag += matrix[i][n - 1 - i];
    }
    cout << main_diag << " " << sec_diag << endl;
}

// Task 11: Position of "-1"
void task11() {
    int n, m;
    cin >> n >> m;
    int last_row = -1, last_col = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (x == -1) {
                last_row = i + 1;
                last_col = j + 1;
            }
        }
    }
    cout << last_row << " " << last_col << endl;
}

// Task 12: Symmetric Matrix
void task12() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    bool symmetric = true;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < n && symmetric; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
            }
        }
    }
    cout << (symmetric ? "YES" : "NO") << endl;
}

// Task 13: Column with Maximum Sum
void task13() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int max_sum = -1000000, max_col = 0;
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_col = j + 1;
        }
    }
    cout << max_col << endl;
}

// Task 14: Rotate Matrix
void task14() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int j = m - 1; j >= 0; j--) {
        for (int i = 0; i < n; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Task 16: Pascal's Triangle
void task16() {
    int n;
    cin >> n;
    vector<vector<long long>> pascal(n);
    for (int i = 0; i < n; i++) {
        pascal[i].resize(i + 1);
        pascal[i][0] = pascal[i][i] = 1;
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    cout << "Choose task (1-16): ";
    cin >> choice;
    switch(choice) {
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
        case 12: task12(); break;
        case 13: task13(); break;
        case 14: task14(); break;
        case 16: task16(); break;
        default: cout << "Invalid task number" << endl;
    }
    return 0;
}