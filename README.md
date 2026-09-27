# Student Marks Analyzer

A simple C++ console-based program developed for **Nexura Tech Department Recruitment — Round 2, Language Task 1**.

## 📌 Task

Create a program that accepts marks for multiple students and calculates:

* Average marks
* Highest marks
* Lowest marks
* Number of passed students
* Number of failed students

**Language:** C++

**Pass Criteria:**

* Marks ≥ 40 → Passed
* Marks < 40 → Failed

## ⚙️ Features

* Accepts marks for multiple students
* Calculates the average marks
* Finds the highest mark
* Finds the lowest mark
* Counts passed students
* Counts failed students

## 💻 Program

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
    int sum = 0;
    int highest, lowest;
    int passed = 0, failed = 0;

    // Input marks
    for (int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];

        sum += marks[i];

        if (marks[i] >= 40)
            passed++;
        else
            failed++;
    }

    // Find highest and lowest marks
    highest = lowest = marks[0];

    for (int i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    // Calculate average
    double average = (double)sum / n;

    // Display results
    cout << "\n----- Student Marks Analysis -----\n";
    cout << "Average Marks: " << average << endl;
    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;
    cout << "Number of Passed Students: " << passed << endl;
    cout << "Number of Failed Students: " << failed << endl;

    return 0;
}
```

## 🧪 Sample Input

```text
Enter number of students: 5
Enter marks of student 1: 85
Enter marks of student 2: 72
Enter marks of student 3: 35
Enter marks of student 4: 90
Enter marks of student 5: 28
```

## 📊 Sample Output

```text
----- Student Marks Analysis -----
Average Marks: 62
Highest Marks: 90
Lowest Marks: 28
Number of Passed Students: 3
Number of Failed Students: 2
```

## 🧠 Concepts Used

* Arrays
* For loops
* If-else conditions
* Variables
* Type casting
* Basic input/output in C++

## ⏱️ Complexity

**Time Complexity:** `O(n)`

**Space Complexity:** `O(n)`

## 👩‍💻 Author

**Avani Shukla**

B.Tech CSE — 1st Year

