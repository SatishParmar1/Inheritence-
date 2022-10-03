#include<iostream>
using namespace std;
class Internal{
public:
int s1,s2,s3;

void marks1(){
cout<<"Enter your marks"<<endl;
cin>>s1>>s2>>s3;
cout<<"s1 marks : "<<s1<<endl<<"s2 marks : "<<s2<<endl<<"s3 marks : " <<s3<<endl;
}
};
class External{
public:
int e1,e2,e3;
 
void marks2(){
cout<<"Enter your External marks"<<endl;
cin>>e1>>e2>>e3;
cout<<"e1 marks : "<<e1<<endl<<"e2 maeks : " <<e2<<endl<<"e3 marks : "<<e3<<endl;
}
};

class Result : public Internal, public External{
int total;
float avg;
public:
void all(){
total = s1+s2+s3+e1+e2+e3;
cout<<"your total of marks is : "<<total<<endl;
avg = total/6;
cout<<"yout average of marks is : "<<avg<<endl;
}
};

int main(){
Result r;
r.marks1();
r.marks2();
r.all();
return 0;
}

