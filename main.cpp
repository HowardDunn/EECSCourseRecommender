#include <iostream>
#include <vector>
#include <fstream>
#include "course.h"
#include "course_algorithms.h"
using namespace std;

void Menu();

int main(){

/*
*/
//First create the course data in memory
vector<course> courses = createCourseDataVector();

Menu();

//printClassInfo(courses);
setTaken(courses);

cout << "Your courses: " << endl;
printTakenCourses(courses);


cout << "\nRecommended Courses: " << endl;
vector<course> recommendations = getCourseRecommendations(courses);

for(int i = 0; i < recommendations.size(); i++){

  cout << recommendations[i].getDepartment() << " " << recommendations[i].getNumber()<< " ->  " << recommendations[i].getName() << " -> " << recommendations[i].getStatus() <<endl;

}

return 0;
}

void Menu(){

    cout << "***************** ";
    cout << "Welcome to the EECS Course Recommender ";
    cout << "***************** \n";

    cout << "***************** ";
    cout << "    Please select the option below     ";
    cout << "***************** \n";




}

