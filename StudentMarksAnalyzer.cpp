#include <iostream>
using namespace std;

int main() {

    // Variable to store the number of students
    int n;

    // Ask the user for the number of students
    cout << "Enter number of students: ";
    cin >> n;

    // Array to store marks of all students
    int marks[n];

    // Variables for calculations
    int sum = 0;
    int highest, lowest;

    // Variables to count passed and failed students
    int passed = 0;
    int failed = 0;

    // Take marks as input for each student
    for (int i = 0; i < n; i++) {

        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];

        // Add the marks to the total
        sum += marks[i];

        // Check whether the student has passed or failed
        // Marks 40 or above = Pass
        // Marks below 40 = Fail
        if (marks[i] >= 40)
            passed++;
        else
            failed++;
    }

    // Initially assume the first student's marks
    // are both the highest and lowest
    highest = marks[0];
    lowest = marks[0];

    // Compare the remaining marks to find
    // the highest and lowest marks
    for (int i = 1; i < n; i++) {

        // Check for highest marks
        if (marks[i] > highest)
            highest = marks[i];

        // Check for lowest marks
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    // Calculate the average
    // Type casting is used to get a decimal result
    double average = (double)sum / n;

    // Display the final results
    cout << "\n----- Student Marks Analysis -----\n";

    cout << "Average Marks: " << average << endl;
    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;
    cout << "Number of Passed Students: " << passed << endl;
    cout << "Number of Failed Students: " << failed << endl;

    return 0;
}
