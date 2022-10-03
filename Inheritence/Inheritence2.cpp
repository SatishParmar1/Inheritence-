#include<iostream>
using namespace std;
class Grand{
protected:
char name[10];
int year;
public:
void gparent(){
cout<<"Enter your father name"<<endl;
cin>>name;
cout<<"Enter birth year"<<endl;
cin>>year;
}

void display1(){
cout<<"father's name :  "<<name<<endl<< "   ";
cout<<"birth year :  "<<year<<endl<< "   ";
}
};

class Parent : public Grand{
protected:
char name1[10];
int year1;
public:
void parent(){
cout<<"Enter your name: "<<endl;
cin>>name1;
cout<<"Enter your birth year"<<endl;
cin>>year1;
}
void display2(){
cout<<"your name : "<<name1<<endl<<"   ";
cout<<"birth year : "<<year1<<endl<<"   ";
}
};

class Child : public Parent{
char name2[10];
int Age;
public:
void age(){
cout<<"Difference between your age and father age: "<<endl;
Age = year-year1;
cout<<Age<<endl;
}
};

int main(){
Child c;
c.gparent();
c.parent();
c.display1();
c.display2();
c.age();
return 0;
}
