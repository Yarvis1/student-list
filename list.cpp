#include <iostream>
#include <cstring>
#include<vector>

using namespace std;
struct student{
  char name;
  int id;
  double gpa;
};
int main(){
  bool quit=false;
  vector<student> person;
  cout<<"valid actions, ADD,DELETE,PRINT,QUIT"<<endl;
  while(quit==false){
    char action[80];
    cout<<"enter an action";
    cin>>action;
    if(action=="ADD"){
      char tempname[80];
      int idnum;
      double gpanum;
      cout<<"enter name: "<<endl;
      cin.getline(tempname,80);
      cout<<"enter id number"<<endl;
      cin>>idnum;
      cout<<"enter gpa"<<endl;
      cin>>gpanum;
      person.push_back({tempname,idnum,gpanum});
    }
    else if(action=="DELETE"){

    }
    else if(action=="PRINT"){
      for(const auto& student : person){
	cout<<"name: "<< student.name<< " id number: " << student.id<<" GPA: "<< student.gpa<<endl;
      }
    }
    else if(action=="QUIT"){
      quit=true;
    }
    else{
      cout<<"not valid input";
    }
  }
  return 0;
}

