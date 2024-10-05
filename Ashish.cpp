



#include <iostream>

#include <string>

class Student {

private:

   std:: string studentName;

   int Roll_Number;

 public:

  void Naam(std:: string name) {

    studentName = name;



  }

        void Roll(int roll){


            Roll_Number = roll;


        } 
      
    void show() const {

     std::cout << "Name: " << studentName << std::endl;

     std::cout << "Roll Number: " << Roll_Number << std::endl;



    }

  







};

int main(){

Student student;

student.Naam("Ashish");

student.Roll(6);

student.show();




}





