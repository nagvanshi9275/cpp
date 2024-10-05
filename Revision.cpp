



#include <iostream>
#include <string>

class Openhemimer{

protected:

std:: string Name;

int age, roll, sallary, pf;


public:


void setDetail(std:: string name, int age, int roll, int sallary, int pf){

    Name = name;

    age = age;

    roll = roll;

    sallary = sallary;

    pf = pf;
      




}

void attending(){

std::cout << Name << "is attending office"<< std::endl;


}



};



//lets make derived class


class Student: public Openhemimer {

public:

void showInfo(){

std::cout << "Student Name"<< Name << "is attending college"<< "There age is"<< age <<std::endl;

}






};

class Staff: public Openhemimer {

public:

void showInfo(){

std::cout << "Staff Name"<< Name << "is attending college"<< "There age is"<< age << "sallary"<<sallary<< std::endl;

}






};

class Faculty: public Openhemimer {

public:

void showInfo(){

std::cout << "Faculty Name"<< Name << "is attending college"<< "There age is"<< age << "sallary"<<sallary<<"pf is"<<pf<<std::endl;

}






};



int main(){

Student student;

student.setDetail("Ashish", 20, 0, 0,0);

student.attending();

student.showInfo();

//g++ inheritence.cpp -o inheritence
Staff staff;

staff.setDetail("Ashok", 34, 3, 20000, 0);

staff.attending();

staff.showInfo();



Faculty faculty;

faculty.setDetail("Ashwathama", 100009, 89, 200000000, 340000);

faculty.attending();

faculty.showInfo();



}







