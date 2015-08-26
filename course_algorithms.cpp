#include "course.h"
#include "course_algorithms.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

vector<course> createCourseDataVector(){

vector<course> v;
course math115;
math115.setName("Calculus I");
math115.setCourseID("math115");
math115.setDepartment("MATH");
math115.setNumber(115);
math115.setCredits(4);

course math116;
math116.setName("Calculus II");
math116.setCourseID("math116");
math116.setDepartment("MATH");
math116.setNumber(116);
math116.setCredits(4);
math116.addEnfReqs(math115);

course math215;
math215.setName("Calculus III");
math215.setCourseID("math215");
math215.setDepartment("MATH");
math215.setNumber(215);
math215.setCredits(4);
math215.addEnfReqs(math116);


course math216;
math216.setName("Calculus IV");
math216.setCourseID("math216");
math216.setDepartment("MATH");
math216.setNumber(216);
math216.setCredits(4);
math216.addEnfReqs(math116);

course engr101;
engr101.setName("Introduction to Computers and Programming");
engr101.setCourseID("engr101");
engr101.setDepartment("ENGR");
engr101.setNumber(101);
engr101.setCredits(4);

course phys140;
phys140.setName("General Physics I");
phys140.setCourseID("phys140");
phys140.setDepartment("PHYS");
phys140.setNumber(140);
phys140.setCredits(4);
phys140.addAdvReqs(math115);

course phys240;
phys240.setName("General Physics II");
phys240.setCourseID("phys240");
phys240.setDepartment("PHYS");
phys240.setNumber(240);
phys240.setCredits(4);
phys240.addAdvReqs(math116);

course eecs183;
eecs183.setName("Elementary Programming Concepts");
eecs183.setCourseID("eecs183");
eecs183.setDepartment("EECS");
eecs183.setNumber(183);
eecs183.setCredits(4);

course eecs203;
eecs203.setName("Discrete Math");
eecs203.setCourseID("eecs203");
eecs203.setDepartment("EECS");
eecs203.setNumber(203);
eecs203.setCredits(4);
eecs203.addEnfReqs(math115);

course eecs215;
eecs215.setName("Intro to Electronic Circuits");
eecs215.setCourseID("eecs215");
eecs215.setDepartment("EECS");
eecs215.setNumber(215);
eecs215.setCredits(4);
eecs215.addEnfReqs(math116);
eecs215.addEnfReqs(engr101);
eecs215.addCoReqs(phys240);

course eecs216;
eecs216.setName("Introduction to Signals and Systems");
eecs216.setCourseID("eecs216");
eecs216.setDepartment("EECS");
eecs216.setNumber(216);
eecs216.setCredits(4);
eecs216.addEnfReqs(eecs215);
eecs216.addAdvReqs(math216);
eecs215.addCoReqs(math216);

course eecs230;
eecs230.setName("Electromagnetics I");
eecs230.setCourseID("eecs230");
eecs230.setDepartment("EECS");
eecs230.setNumber(230);
eecs230.setCredits(4);
eecs230.addEnfReqs(math215);
eecs230.addEnfReqs(phys240);
eecs230.addEnfReqs(eecs215);

course eecs270;
eecs270.setName("Intro to Logic and Design");
eecs270.setCourseID("eecs270");
eecs270.setDepartment("EECS");
eecs270.setNumber(270);
eecs270.addEnfReqs(eecs183);
eecs270.addEnfReqs(engr101);
eecs270.setCredits(4);

course eecs280;
eecs280.setName("Programming and Introductory Data Structures");
eecs280.setCourseID("eecs280");
eecs280.setDepartment("EECS");
eecs280.setNumber(280);
eecs280.addEnfReqs(eecs183);
eecs280.addEnfReqs(engr101);
eecs280.addAdvReqs(math115);
eecs280.setCredits(4);

course eecs281;
eecs281.setName("Data Structures and Algorithms");
eecs281.setCourseID("eecs281");
eecs281.setDepartment("EECS");
eecs281.setNumber(281);
eecs281.addEnfReqs(eecs280);
eecs281.addEnfReqs(eecs203);
eecs281.setCredits(4);

course eecs285;
eecs285.setName("A Programming Language or Computer System");
eecs285.setCourseID("eecs285");
eecs285.setDepartment("EECS");
eecs285.setNumber(285);
eecs285.addAdvReqs(engr101);
eecs285.addAdvReqs(eecs183);
eecs285.setCredits(2);

course eecs301;
eecs301.setName("Probablistic Methods in Engineering");
eecs301.setCourseID("eecs301");
eecs301.setDepartment("EECS");
eecs301.setNumber(301);
eecs301.setCredits(4);
eecs301.addAdvReqs(eecs216);
eecs301.addCoReqs(eecs216);

course eecs311;
eecs311.setName("Electronic Circuits");
eecs311.setCourseID("eecs311");
eecs311.setDepartment("EECS");
eecs311.setNumber(311);
eecs311.setCredits(4);
eecs311.addEnfReqs(eecs216);

course eecs312;
eecs312.setName("Digital Integrated Circuits");
eecs312.setCourseID("eecs312");
eecs312.setDepartment("EECS");
eecs312.setNumber(312);
eecs312.setCredits(4);
eecs312.addEnfReqs(eecs215);
eecs312.addEnfReqs(math216);

course eecs314;
eecs314.setName("Electronic Circuits, Systems and Applications");
eecs314.setCourseID("eecs314");
eecs314.setDepartment("EECS");
eecs314.setNumber(314);
eecs314.setCredits(4);
eecs314.addEnfReqs(phys240);
eecs314.addEnfReqs(math216);

course eecs320;
eecs320.setName("Introduction to Semiconductor Devices");
eecs320.setCourseID("eecs320");
eecs320.setDepartment("EECS");
eecs320.setNumber(320);
eecs320.setCredits(4);
eecs320.addEnfReqs(eecs215);
eecs320.addEnfReqs(phys240);

course eecs330;
eecs330.setName("Electromagnetics II");
eecs330.setCourseID("eecs330");
eecs330.setDepartment("EECS");
eecs330.setNumber(330);
eecs330.setCredits(4);
eecs330.addEnfReqs(eecs230);

course eecs334;
eecs334.setName("Principles of Optics");
eecs334.setCourseID("eecs334");
eecs334.setDepartment("EECS");
eecs334.setNumber(334);
eecs334.setCredits(4);
eecs334.addEnfReqs(phys240);

course eecs351;
eecs351.setName("Introduction to Digital Signal Processing");
eecs351.setCourseID("eecs351");
eecs351.setDepartment("EECS");
eecs351.setNumber(351);
eecs351.setCredits(4);
eecs351.addEnfReqs(eecs216);

course eecs370;
eecs370.setName("Introduction to Computer Organization");
eecs370.setCourseID("eecs370");
eecs370.setDepartment("EECS");
eecs370.setNumber(370);
eecs370.setCredits(4);
eecs370.addEnfReqs(eecs203);
eecs370.addEnfReqs(eecs270);
eecs370.addEnfReqs(eecs280);

course eecs373;
eecs373.setName("Design of Microprocessor Based Systems");
eecs373.setCourseID("eecs373");
eecs373.setDepartment("EECS");
eecs373.setNumber(373);
eecs373.setCredits(4);
eecs373.addEnfReqs(eecs270);
eecs373.addEnfReqs(eecs370);

course eecs376;
eecs376.setName("Foundations of Computer Science");
eecs376.setCourseID("eecs376");
eecs376.setDepartment("EECS");
eecs376.setNumber(376);
eecs376.setCredits(4);
eecs376.addEnfReqs(eecs203);
eecs376.addEnfReqs(eecs280);

course eecs381;
eecs381.setName("Object Oriented and Advanced Programming");
eecs381.setCourseID("eecs381");
eecs381.setDepartment("EECS");
eecs381.setNumber(381);
eecs381.setCredits(4);
eecs381.addEnfReqs(eecs370);
eecs381.addEnfReqs(eecs281);

course eecs388;
eecs388.setName("Introduction to Computer Security");
eecs388.setCourseID("eecs388");
eecs388.setDepartment("EECS");
eecs388.setNumber(388);
eecs388.setCredits(4);
eecs388.addEnfReqs(eecs281);



v.push_back(engr101);
v.push_back(math115);
v.push_back(math116);
v.push_back(math215);
v.push_back(math216);
v.push_back(phys140);
v.push_back(phys240);
v.push_back(eecs183);
v.push_back(eecs203);
v.push_back(eecs215);
v.push_back(eecs216);
v.push_back(eecs230);
v.push_back(eecs270);
v.push_back(eecs280);
v.push_back(eecs281);
v.push_back(eecs285);
v.push_back(eecs301);
v.push_back(eecs311);
v.push_back(eecs312);
v.push_back(eecs314);
v.push_back(eecs320);
v.push_back(eecs330);
v.push_back(eecs334);
v.push_back(eecs351);
v.push_back(eecs370);
v.push_back(eecs373);
v.push_back(eecs376);
v.push_back(eecs381);
v.push_back(eecs388);




return v;
}


void createCourseData(){
course math115;
math115.setName("Calculus I");
math115.setCourseID("math115");
math115.setDepartment("MATH");
math115.setNumber(115);
math115.setCredits(4);

course math116;
math116.setName("Calculus II");
math116.setCourseID("math116");
math116.setDepartment("MATH");
math116.setNumber(116);
math116.setCredits(4);
math116.addEnfReqs(math115);

course math215;
math215.setName("Calculus III");
math215.setCourseID("math215");
math215.setDepartment("MATH");
math215.setNumber(215);
math215.setCredits(4);
math215.addEnfReqs(math116);


course math216;
math216.setName("Calculus IV");
math216.setCourseID("math216");
math216.setDepartment("MATH");
math216.setNumber(216);
math216.setCredits(4);
math216.addEnfReqs(math116);

course engr101;
engr101.setName("Introduction to Computers and Programming");
engr101.setCourseID("engr101");
engr101.setDepartment("ENGR");
engr101.setNumber(101);
engr101.setCredits(4);

course phys140;
phys140.setName("General Physics I");
phys140.setCourseID("phys140");
phys140.setDepartment("PHYS");
phys140.setNumber(140);
phys140.setCredits(4);
phys140.addAdvReqs(math115);

course phys240;
phys240.setName("General Physics II");
phys240.setCourseID("phys240");
phys240.setDepartment("PHYS");
phys240.setNumber(240);
phys240.setCredits(4);
phys240.addAdvReqs(math116);

course eecs183;
eecs183.setName("Elementary Programming Concepts");
eecs183.setCourseID("eecs183");
eecs183.setDepartment("EECS");
eecs183.setNumber(183);
eecs183.setCredits(4);

course eecs203;
eecs203.setName("Discrete Math");
eecs203.setCourseID("eecs203");
eecs203.setDepartment("EECS");
eecs203.setNumber(203);
eecs203.setCredits(4);
eecs203.addEnfReqs(math115);

course eecs215;
eecs215.setName("Intro to Electronic Circuits");
eecs215.setCourseID("eecs215");
eecs215.setDepartment("EECS");
eecs215.setNumber(215);
eecs215.setCredits(4);
eecs215.addEnfReqs(math116);
eecs215.addEnfReqs(engr101);
eecs215.addCoReqs(phys240);

course eecs216;
eecs216.setName("Introduction to Signals and Systems");
eecs216.setCourseID("eecs216");
eecs216.setDepartment("EECS");
eecs216.setNumber(216);
eecs216.setCredits(4);
eecs216.addEnfReqs(eecs215);
eecs216.addAdvReqs(math216);
eecs215.addCoReqs(math216);

course eecs230;
eecs230.setName("Electromagnetics I");
eecs230.setCourseID("eecs230");
eecs230.setDepartment("EECS");
eecs230.setNumber(230);
eecs230.setCredits(4);
eecs230.addEnfReqs(math215);
eecs230.addEnfReqs(phys240);
eecs230.addEnfReqs(eecs215);

course eecs270;
eecs270.setName("Intro to Logic and Design");
eecs270.setCourseID("eecs270");
eecs270.setDepartment("EECS");
eecs270.setNumber(270);
eecs270.addEnfReqs(eecs183);
eecs270.addEnfReqs(engr101);
eecs270.setCredits(4);

course eecs280;
eecs280.setName("Programming and Introductory Data Structures");
eecs280.setCourseID("eecs280");
eecs280.setDepartment("EECS");
eecs280.setNumber(280);
eecs280.addEnfReqs(eecs183);
eecs280.addEnfReqs(engr101);
eecs280.addAdvReqs(math115);
eecs280.setCredits(4);

course eecs281;
eecs281.setName("Data Structures and Algorithms");
eecs281.setCourseID("eecs281");
eecs281.setDepartment("EECS");
eecs281.setNumber(281);
eecs281.addEnfReqs(eecs280);
eecs281.addEnfReqs(eecs203);
eecs281.setCredits(4);

course eecs285;
eecs285.setName("A Programming Language or Computer System");
eecs285.setCourseID("eecs285");
eecs285.setDepartment("EECS");
eecs285.setNumber(285);
eecs285.addAdvReqs(engr101);
eecs285.addAdvReqs(eecs183);
eecs285.setCredits(2);

course eecs301;
eecs301.setName("Probablistic Methods in Engineering");
eecs301.setCourseID("eecs301");
eecs301.setDepartment("EECS");
eecs301.setNumber(301);
eecs301.setCredits(4);
eecs301.addAdvReqs(eecs216);
eecs301.addCoReqs(eecs216);

course eecs311;
eecs311.setName("Electronic Circuits");
eecs311.setCourseID("eecs311");
eecs311.setDepartment("EECS");
eecs311.setNumber(311);
eecs311.setCredits(4);
eecs311.addEnfReqs(eecs216);

course eecs312;
eecs312.setName("Digital Integrated Circuits");
eecs312.setCourseID("eecs312");
eecs312.setDepartment("EECS");
eecs312.setNumber(312);
eecs312.setCredits(4);
eecs312.addEnfReqs(eecs215);
eecs312.addEnfReqs(math216);

course eecs314;
eecs314.setName("Electronic Circuits, Systems and Applications");
eecs314.setCourseID("eecs314");
eecs314.setDepartment("EECS");
eecs314.setNumber(314);
eecs314.setCredits(4);
eecs314.addEnfReqs(phys240);
eecs314.addEnfReqs(math216);

course eecs320;
eecs320.setName("Introduction to Semiconductor Devices");
eecs320.setCourseID("eecs320");
eecs320.setDepartment("EECS");
eecs320.setNumber(320);
eecs320.setCredits(4);
eecs320.addEnfReqs(eecs215);
eecs320.addEnfReqs(phys240);

course eecs330;
eecs330.setName("Electromagnetics II");
eecs330.setCourseID("eecs330");
eecs330.setDepartment("EECS");
eecs330.setNumber(330);
eecs330.setCredits(4);
eecs330.addEnfReqs(eecs230);

course eecs334;
eecs334.setName("Principles of Optics");
eecs334.setCourseID("eecs334");
eecs334.setDepartment("EECS");
eecs334.setNumber(334);
eecs334.setCredits(4);
eecs334.addEnfReqs(phys240);

course eecs351;
eecs351.setName("Introduction to Digital Signal Processing");
eecs351.setCourseID("eecs351");
eecs351.setDepartment("EECS");
eecs351.setNumber(351);
eecs351.setCredits(4);
eecs351.addEnfReqs(eecs216);

course eecs370;
eecs370.setName("Introduction to Computer Organization");
eecs370.setCourseID("eecs370");
eecs370.setDepartment("EECS");
eecs370.setNumber(370);
eecs370.setCredits(4);
eecs370.addEnfReqs(eecs203);
eecs370.addEnfReqs(eecs270);
eecs370.addEnfReqs(eecs280);

course eecs373;
eecs373.setName("Design of Microprocessor Based Systems");
eecs373.setCourseID("eecs373");
eecs373.setDepartment("EECS");
eecs373.setNumber(373);
eecs373.setCredits(4);
eecs373.addEnfReqs(eecs270);
eecs373.addEnfReqs(eecs370);

course eecs376;
eecs376.setName("Foundations of Computer Science");
eecs376.setCourseID("eecs376");
eecs376.setDepartment("EECS");
eecs376.setNumber(376);
eecs376.setCredits(4);
eecs376.addEnfReqs(eecs203);
eecs376.addEnfReqs(eecs280);

course eecs381;
eecs381.setName("Object Oriented and Advanced Programming");
eecs381.setCourseID("eecs381");
eecs381.setDepartment("EECS");
eecs381.setNumber(381);
eecs381.setCredits(4);
eecs381.addEnfReqs(eecs370);
eecs381.addEnfReqs(eecs281);

course eecs388;
eecs388.setName("Introduction to Computer Security");
eecs388.setCourseID("eecs388");
eecs388.setDepartment("EECS");
eecs388.setNumber(388);
eecs388.setCredits(4);
eecs388.addEnfReqs(eecs281);

ofstream save("saved.ros",ios::binary);
//ofstream save("saved.txt",ios::binary);


save.write(reinterpret_cast< const char * >(&engr101),sizeof(course));
save.write(reinterpret_cast< const char * >(&math115),sizeof(course));
save.write(reinterpret_cast< const char * >(&math116),sizeof(course));
save.write(reinterpret_cast< const char * >(&math215),sizeof(course));
save.write(reinterpret_cast< const char * >(&math216),sizeof(course));
save.write(reinterpret_cast< const char * >(&phys140),sizeof(course));
save.write(reinterpret_cast< const char * >(&phys240),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs183),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs203),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs215),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs216),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs230),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs270),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs280),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs281),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs285),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs301),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs311),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs312),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs314),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs320),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs330),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs334),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs351),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs370),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs373),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs376),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs381),sizeof(course));
save.write(reinterpret_cast< const char * >(&eecs388),sizeof(course));


save << engr101;
save << eecs280;
save.close();
}


course getObject(vector<course> courses, string courseId){

for (int i = 0; i < courses.size(); i++){

if(courses[i].getCourseId() == courseId){

return courses[i];

}

}
}
void printEnfRequisites(vector<course> courses){

if(courses.size() == 0){

return;
}
cout << "Enforced Prequisites: " <<endl;
for (int i = 0; i < courses.size(); i++){

 cout << courses[i].getDepartment() << " " << courses[i].getNumber() <<endl;
}

}

void printAdvRequisites(vector<course> courses){

if(courses.size() == 0){

return;
}
cout << "Advised Prequisites: " <<endl;
for (int i = 0; i < courses.size(); i++){

 cout << courses[i].getDepartment() << " " << courses[i].getNumber() <<endl;
}

}

void printCoRequisites(vector<course> courses){

if(courses.size() == 0){

return;
}
cout << "CoRequisites: " <<endl;
for (int i = 0; i < courses.size(); i++){

 cout << courses[i].getDepartment() << " " << courses[i].getNumber() <<endl;
}

}


void printClassInfo(vector<course> courses){

string find;
cout << "Enter the course you want to find: ";
cin >> find;

bool found = false;
for(int i= 0; i < courses.size(); i++){

if(courses[i].getCourseId() == find){

found = true;
cout << "Found: " << endl << courses[i].getDepartment() << " " << courses[i].getNumber()<<" - " <<courses[i].getName() << endl;
cout << "Credits: " << courses[i].getCredits() << endl;
cout << "Status: " << courses[i].getStatus() << endl;
printEnfRequisites(courses[i].getEnfReqs());
printAdvRequisites(courses[i].getAdvReqs());
printCoRequisites(courses[i].getCoReqs());

}

}

if(!found){

cout << "Could not find class with name: " << find << endl;

}

}

void setTaken(vector<course> &courses){

string course;
ifstream fin("courses.txt");

if(!fin){

cout << "Error opening file, check if file exists.\n";
return;

}

while(!fin.eof()){

 //getline(fin,course);
 int num;
 string dep;
 fin >> dep >> num;

 for(int i= 0; i < courses.size(); i++){
 
  // string checker = courses[i].getDepartment() + " " + to_string(courses[i].getNumber());

 //if(course == checker){


if(dep == courses[i].getDepartment() && num == courses[i].getNumber()){
  courses[i].setStatus(taken);
 } 
 
 } 
}


fin.close();


}

bool isTaken(course corse){

string course;
ifstream fin("courses.txt");

if(!fin){

cout << "Error opening file, check if file exists.\n";
return false;

}


while(!fin.eof()){

 
 int num;
 string dep;
 fin >> dep >> num;



if(dep == corse.getDepartment() && num == corse.getNumber()){

  return true;
 } 
 
  
}


fin.close();

return false;
}

void printTakenCourses(vector<course> &courses){

for(int i = 0; i < courses.size(); i++){

if(courses[i].getStatus() == "Taken"){

 cout << courses[i].getDepartment() << " " << courses[i].getNumber() <<endl;
}

}


}

vector<course> getCourseRecommendations(vector<course> courses){

vector<course> recommendations;

for(int i = 0; i < courses.size(); i++){

 if(courses[i].getStatus() == "Taken"){

 continue;
 }

 else{


 if(courses[i].getEnfReqs().size() != 0){
//cout << " not this time \n";
	bool addCourse = true;
   for(int j = 0; j < courses[i].getEnfReqs().size(); j++){

      if(!isTaken(courses[i].getEnfReqs()[j])){

      addCourse = false;

      }
     
      else if(j == (courses[i].getEnfReqs().size()- 1)){

	
   
     }

else{


}
      
     }

   if(addCourse){


        recommendations.push_back(courses[i]);
       
        if(courses[i].getAdvReqs().size() != 0){

         for(int k = 0; k < courses[i].getAdvReqs().size(); k++){ 

           if(!isTaken( courses[i].getAdvReqs()[k])){
  
		
              recommendations.push_back(courses[i].getAdvReqs()[k]);

           }
        }
       }
 } //end if
  }

  else{

   if(courses[i].getAdvReqs().size() != 0){

	recommendations.push_back(courses[i]);
         for(int k = 0; k < courses[i].getAdvReqs().size(); k++){ 

		
		
           if(!isTaken( courses[i].getAdvReqs()[k])){
  
            //  recommendations.push_back(courses[i].getAdvReqs()[k]);
		if(courses[i].getAdvReqs()[k].getEnfReqs().size() == 0){

			
			recommendations.push_back(getObject(courses, courses[i].getAdvReqs()[k].getCourseId()));
		}
           }
        }
       }
    

  }

 }

}

return recommendations;
}

void removeDuplicates(vector<course> &courses){


for(int i = 0; i < courses.size(); i++){

 for(int j = 0; j < courses.size(); j++){

  if(i == j){

   continue;
  }

  else{

  if(courses[i].getCourseId() == courses[j].getCourseId()){

    	//courses.erase(j);
   }

  }

 }


}




}

//cout <<sizeof(myCourse) << "  " << sizeof(eecs280) << endl;
/*
ifstream ifs("saved.ros",ios::binary);

if(!ifs){

cout << "I dont know what happened, exiting ... ";
return -1;
}


 while(!ifs.eof()){



	

	
	//ifs.read((char *) &myCourse2,sizeof(course));
	ifs.read(reinterpret_cast< char * >(&myCourse2),sizeof(course));

	//ifs >> myCourse2;
	//myCourse2.setStatus(notTaken);
	courses.push_back(myCourse2);
}

//courses.pop_back();
ifs.close();
*/

