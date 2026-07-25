#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define MAX_STUDENTS 5

	struct Student {
		int studentId;
		string studentName;
		float studentGrades;
	};

	void printMenu();
	void highestGrade(Student students[], int count);
	void lowestGrade(Student students[], int count);
	void averageGrade(Student students[], int count);
	void printStudentId(Student students[], int count);
	void printStudentName(Student students[], int count);

	int main() {
		Student students[MAX_STUDENTS];
		int count = 0;  // this keeps track of the students that are in the class
		int choice;     // user input

			Student student1;
			students[0] .studentName = "Jimmy Dean";
			students[0] .studentGrades = 96.7;
			students[0] .studentId = 200003428;
			Student student2;
			students[1].studentName = "John Pork";
			students[1].studentGrades = 71.8;
			students[1].studentId = 20001654;
			Student student3;
			students[2].studentName = "George Curious";
			students[2].studentGrades = 89.2;
			students[2].studentId = 20008965;
			Student student4;
			students[3].studentName = "Jim Gram";
			students[3].studentGrades = 52.6;
			students[3].studentId = 20009930;
			Student student5;
			students[4].studentName = "Albert Einstein";
			students[4].studentGrades = 101.0;
			students[4].studentId = 200031415;
			count = 5;

		do {
			printMenu();
			cout << "Enter your choice: ";
			cin >> choice;
			cin.ignore();  // we add this to consume the leftover newline

			switch (choice) {
			case 1:
				highestGrade(students, count);
				break;
			case 2:
				lowestGrade(students, count);
				break;
			case 3:
				averageGrade(students, count);
				break;
			case 4:
				printStudentId(students, count);
				break;
			case 5:
				printStudentName(students, count);
				break;
			case 6:
				cout << "Goodbye!\n";
				break;
			default:
				cout << "Invalid choice. Please try again.\n";
			}
		} while (choice != 6);

		return 0;
	}

	void printMenu() {
		cout << "\n=== Student Record System ===\n";
		cout << "1. Find student with the highest grade\n";
		cout << "2. Find the student with the lowest grade\n";
		cout << "3. Find the average grade in the class\n";
		cout << "4. Print all the student's ID\n";
		cout << "5. Print all the student's names\n";
		cout << "6. Exit\n";
	}

	void highestGrade(Student students[], int count)
	{
		if (count == 0) {
			cout << "No students in the record.\n";
			return;
		}
		Student highest = students[0];

		for (int i = 1; i < count; i++) {
			if (students[i].studentGrades > highest.studentGrades) {
				highest = students[i];
			}
		}
		cout << "Highest Grade: " << highest.studentName << endl;
		cout << "Grade: " << highest.studentGrades << endl;
	}
	void lowestGrade(Student students[], int count)
	{
		if (count == 0) {
			cout << "No students in this record. \n" << endl;
			return;
		}
		Student lowest = students[0];
		for (int i = 1; i < count; i++) {
			if (students[i].studentGrades < lowest.studentGrades) {
				lowest = students[i];
			}
		}
		cout << "Lowest Grade: " << lowest.studentName << endl;
		cout << "Grade: " << lowest.studentGrades << endl;
	}

	void averageGrade(Student students[], int count)
	{
		if (count == 0) {
			cout << "No students in the record.";
			return;
		}
		float sum = 0;
		for (int i = 0; i < count; i++) {
			sum += students[i].studentGrades;
		}
		float average = sum / count;
		cout << "Average Grade: " << average << endl;
	}
	void printStudentId(Student students[], int count)
	{
		for (int i = 0; i < count; i++)
			cout << students[i].studentId << endl;
	}
	void printStudentName(Student students[], int count)
	{
		for (int i = 0; i < count; i++)
			cout << students[i].studentName << endl;
	}
