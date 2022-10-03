#include<iostream>
using namespace std;
class Student{
int id;
char name[10];
public:
void bio(){
 cout<<"Enter your id"<<endl;
 cin>>id;
 cout<<"Enter your name"<<endl;
 cin>>name;
 
 cout<<"your id : "<<id<<endl<<"your name :"<<name<<endl;
 }
 };
 
 class Mark : public Student{
 public:
 int de,se,dsa;
 int total;
  float avg;
 void Total(){
 cout<<"Enter your marks of subjects de,se,dsa"<<endl;
 cin>>de>>se>>dsa;
 cout<<" your marks is :"<<endl<<de<<endl<<se<<endl<<dsa<<endl;
 
 int total = de+dsa+se;
 cout<<"total marks is :  " <<total<<endl;
 float avg = total/3;
 cout<<"average of marks is : "<<avg<<endl;
 
 }
 };
 int main(){
 Mark m;
 m.bio();
 m.Total();
 return 0;
 }
