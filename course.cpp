#include "course.h"
void course::setName(string nam){
 
 name = nam;
}
void course::setCourseID(string id){

courseId = id;
}
void course::setDepartment(string dep){

 department = dep;
}

void course::setNumber(int num){

 number = num;
}

void course::addAdvReqs(course advReq){

 advreqs.push_back(advReq);
}


void course::addEnfReqs(course enfReq){

enfreqs.push_back(enfReq);
}

void course::addCoReqs(course coReq){

coreqs.push_back(coReq);
}

void course::setStatus(Status stat){

status = stat;
}

void course::setCredits(int cred){

credits = cred;
}

string course::getName(){

return name;
}

string course::getCourseId(){

return courseId;
}

string course::getDepartment(){

return department;
}

int course::getNumber(){

return number;
}
   
string course::getStatus(){
if(status == 0){
return "Taken";
}
return "Not taken";
}

int course::getCredits(){

return credits;
}

vector<course> course::getAdvReqs(){

return advreqs;
}
vector<course> course::getEnfReqs(){

return enfreqs;
}
  
vector<course> course::getCoReqs(){

return coreqs;
}

istream& operator >> (istream& in, course& obj)
{
in >> obj.name;
in >> obj.department;
in >> obj.courseId;
in >> obj.number;
//in >> obj.advreqs;
//in >> obj.enfreqs;
//in >> obj.coreqs;
//in >> obj.status;
in >> obj.credits;



return in;
}
ostream& operator << (ostream& out, const course& obj)
{
out << obj.name;
out << obj.department;
out << obj.courseId;
out << obj.number;
//out << obj.advreqs;
//out << obj.enfreqs;
//out << obj.coreqs;
//out << obj.status;
out << obj.credits;
return out;
}



