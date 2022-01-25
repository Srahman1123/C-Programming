
//Shamsur Rahmam

#include <iostream>

using namespace std;

struct date{//storing date

int day;

int month;

int year;

};

struct address{//storing address

string house_street;

string city;

string state;

string zip_code;

};

class student{//students details

private:

string name;

int ID;

date dob;

address add;

int total_credit;

double GPA;

public:

student(){

name = "";

ID = 0;

dob.day = 0;

dob.month = 0;

dob.year = 0;

add.house_street = "";

add.city = "";

add.state = "";

add.zip_code = "";

total_credit = 0;

GPA = 0.0;

}

student(string name, int ID, int day, int month, int year, string house_street, string city, string state, string zip_code, int total_credit, double GPA){

this->name = name;

this->ID = ID;

dob.day = day;

dob.month = month;

dob.year = year;

add.house_street = house_street;

add.city = city;

add.state = state;

add.zip_code = zip_code;

this->total_credit = total_credit;

this->GPA = GPA;

}

void setName(string x){

name = x;

}

void setID(int x){

ID = x;

}

void setDOB(int d, int m, int y){

dob.day = d;

dob.month = m;

dob.year = y;

}

void setAdress(string house_str, string cty, string st, string zip){

add.house_street = house_str;

add.city = cty;

add.state = st;

add.zip_code = zip;

}

void setTotal_credit(int x){

total_credit = x;

}

void setGPA(double x){

GPA = x;

}

// getter function declarations

double getGPA();

int getTotal_credit();

address getAdress();

date getDOB();

int getID();

string getName();

};

double student::getGPA(){

return GPA ;

}

int student::getTotal_credit(){

return total_credit;

}

address student::getAdress(){

return add;

}

date student::getDOB(){

return dob;

}

int student::getID(){

return ID ;

}

string student::getName(){

return name ;

}

int main() {

student st1; // this will cal default constrcutor

string name;

int ID,d,m,y, credit;

string cty, st, zip, house;

double gpa;

cout<<"**********************************************"<<endl;

cout<<"**********************************************"<<endl;

cout<<" Input student -1 details "<<endl;

cout<<"Enter Student Name: ";

getline(cin, name);

st1.setName(name);

cout<<"Enter Student ID: ";

cin>>ID;

st1.setID(ID);

cout<<"\nEnter Student Date of birth: "<<endl;

cout<<"Enter Month(1-12): ";

cin>>m;

cout<<"Enter Date(1-30): ";

cin>>d;

cout<<"Enter year(xxxx): ";

cin>>y;

st1.setDOB(d, m, y);

cout<<"\nEnter Student address: "<<endl;

cout<<"Enter house number and street: ";

getline(cin >> ws, house);

cout<<"Enter City: ";

getline(cin, cty);

cout<<"Enter state: ";

getline(cin, st);

cout<<"Enter zip code: ";

getline(cin, zip);

st1.setAdress(house, cty, st, zip);

cout<<"\nEnter total credits earned: ";

cin>>credit;

st1.setTotal_credit(credit);

cout<<"Enter GPA: ";

cin>>gpa;

st1.setGPA(gpa);

cout<<"**********************************************"<<endl;

cout<<"**********************************************"<<endl;

cout<<" Student 1 details are \n";

cout<<"Name: "<<st1.getName()<<endl;

date dob;

dob = st1.getDOB();

cout<<"DOB: "<<dob.day<<" / "<<dob.month<<" / "<<dob.year<<endl;

address add;

add = st1.getAdress();

cout<<"Address: "<<add.house_street<<", "<<add.city<<", "<<add.state<<", "<<add.zip_code<<endl;

cout<<"Total credit earned : "<<st1.getTotal_credit()<<endl;

cout<<"GPA: "<<st1.getGPA()<<endl;

cout<<"\n**********************************************"<<endl;

cout<<"**********************************************"<<endl;

cout<<" Input student -2 details "<<endl;

cout<<"Enter Student Name: ";

getline(cin >> ws, name);

cout<<"Enter Student ID: ";

cin>>ID;

cout<<"\nEnter Student Date of birth: "<<endl;

cout<<"Enter Date(1-30): ";

cin>>d;

cout<<"Enter Month(1-12): ";

cin>>m;

cout<<"Enter year(xxxx): ";

cin>>y;

cout<<"\nEnter Student address: "<<endl;

cout<<"Enter house number and street: ";

getline(cin >> ws, house);

cout<<"Enter City: ";

getline(cin, cty);

cout<<"Enter state: ";

getline(cin, st);

cout<<"Enter zip code: ";

getline(cin, zip);

cout<<"\nEnter total credits earned: ";

cin>>credit;

cout<<"Enter GPA: ";

cin>>gpa;

student st2(name, ID, d, m ,y,house, cty, st, zip, credit, gpa);
cout<<"**********************************************"<<endl;

cout<<"**********************************************"<<endl;

cout<<" Student 2 details are \n";

cout<<"Name: "<<st2.getName()<<endl;

date dob2;

dob2 = st2.getDOB();

cout<<"DOB: "<<dob2.day<<" / "<<dob2.month<<" / "<<dob2.year<<endl;

address add2;

add2 = st2.getAdress();

cout<<"Address: "<<add2.house_street<<", "<<add2.city<<", "<<add2.state<<", "<<add2.zip_code<<endl;

cout<<"Total credit earned : "<<st2.getTotal_credit()<<endl;

cout<<"GPA: "<<st2.getGPA()<<endl;

// To check wheter student 1 (st1) lives in zip code of 11235

if(st1.getAdress().zip_code == "11235"){

cout<<"\n\nYes! Student 1 lives in zip code of 11235(close to school)\n";

}

else

cout<<"\n\nNo! Student 1 doesn't live in zip code of 11235(close to school)\n";

// To check wheter student 1 (st1) birthday is in november

if(st1.getDOB().month == 11){

cout<<"\n\nYes! Student 1 birthday is in November\n";

}

else

cout<<"\n\nNo! Student 1 birthday is not in November\n";

return 0;

}
