#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <iostream>
using namespace std;
enum Status{taken,notTaken};

class course{
	
 
 string name;
 string department;
 string courseId;
 int number;
 vector<course> advreqs;
 vector<course> enfreqs;
 vector<course> coreqs;
 Status status ;
 int credits;

 public:
   //THESE FUNCTIONS SET VALUES WITHIN THE CLASS
   course(){

   status = notTaken;
}
   void setName(string nam);
   void setCourseID(string id);
   void setDepartment(string dep);
   void setNumber(int num);
   void addAdvReqs(course advReq);
   void addEnfReqs(course enfReq);
   void addCoReqs(course coReq);
   void setStatus(Status stat);
   void setCredits(int cred);

   //THESE FUNCTIONS RETURN VALUES/OBJECTS STORED IN THE FUNCTION
   string getName();
   string getCourseId();
   string getDepartment();
   int getNumber();
   string getStatus();
   int getCredits();
   vector<course> getAdvReqs();
   vector<course> getEnfReqs();
   vector<course> getCoReqs();
friend istream& operator >> (istream& in, course& obj);
friend ostream& operator << (ostream& out, const course& obj);


   
};

istream& operator >> (istream& in, course& obj);
ostream& operator << (ostream& out, const course& obj);
#endif
