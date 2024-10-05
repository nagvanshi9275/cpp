

#include <iostream>


class Person {


public:

std::string Name;

int age;


void attentschool(){

std::cout<< Name<<"attending school"<< std::endl;


}



};

//lets make derived class;


class Teacher: public Person {

public:

   void Teach(){

    std::cout <<Name<< "is teaching"<<std::endl;

   }
   





};

class Student: public Person {

 public:

 void School(){
std::cout << Name << "IS Attending the school"<<std::endl;

 }



};


int main(){

Teacher teacher;


teacher.Name = "Tagore";

teacher.age = 45;

teacher.attentschool();

Student student;

student.Name = "Vikram";

student.age = 23;

student.attentschool();

return 0;



}


