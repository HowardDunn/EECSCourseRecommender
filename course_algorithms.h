#ifndef COURSEALGORITHMS_H
#define COURSEALGORITHMS_H

vector<course> createCourseDataVector();
void createCourseData();
void printClassInfo(vector<course> courses);
void printCoRequisites(vector<course> courses);
void printAdvRequisites(vector<course> courses);
course getObject(vector<course> courses, string courseId);
void setTaken(vector<course> &courses);
void printTakenCourses(vector<course> &courses);
bool isTaken(course corse);
void removeDuplicates(vector<course> &courses);
vector<course> getCourseRecommendations(vector<course> courses);
#endif
