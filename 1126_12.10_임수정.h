#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Course {
public:
	Course(const string& courseName, int capacity);
	~Course();
	Course(const Course&);
	string getCourseName() const;
	void addStudents() cosnt;
	int getNumberOfStudents() const;
private:
	string courseName;
	vector<string> students;
	int numberOfStudents;
	int capacity;
};

#endif