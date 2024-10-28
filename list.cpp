#include <iostream>
#include <cstring>
#include<vector>

using namespace std;
struct student{
  char name[80];
  int id;
  double gpa;
};
int main(){
  bool quit = false;
  vector<student> person;
  cout<<"valid actions, ADD,DELETE,PRINT,QUIT"<<endl;
  while(quit==false){
    char action[80];
    cout<<"enter an action"<<endl;
    cin.getline(action,80);
    if(strcmp(action,"ADD")==0){
      student newStudent; 
      cout << "Enter name: "<<endl;
      cin.getline(newStudent.name, 80); 
      cout << "Enter ID number: "<<endl;
      cin >> newStudent.id; 
      cout << "Enter GPA: "<<endl;
      cin >> newStudent.gpa;
      cin.ignore();  
      person.push_back(newStudent);
    }
    else if(strcmp(action,"DELETE")==0){
      int givenId;
      cout << "Enter the ID of the student to delete: ";
      cin >> givenId;
      bool found = false;
      for (auto it = person.begin(); it != person.end(); ++it) {
        if ((it)->id == givenId) {
          person.erase(it);
          found = true;
          cout <<" deleted." << endl;
          break;
        }
      }
      if(found==false){
	cout<<"id not found"<<endl;
      }
    }
    else if(strcmp(action,"PRINT")==0){
      for(const auto& student : person){
	cout<<"name: "<< student.name<< ", id number: " << student.id<<", GPA: "<< student.gpa<<endl;
      }
    }
    else if(strcmp(action,"QUIT")==0){
      quit=true;
    }
    else{
      cout<<"not valid input";
    }
  }
  return 0;
}

