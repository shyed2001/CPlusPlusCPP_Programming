#include<iostream>
using namespace std;
class student
{
protected:
int roll_no;
char name[20];
};

class exam_inherit
{
protected:
int sub1;
int sub2;
int sub3;
};

class grade:public student, public exam_inherit
{
private: 
int avg;
public: 
void input();
void display();
void average();
int total;
void input_exam();
void display_exam();
};
void grade::input()
{
cout<<"Enter Roll no:";
cin>>roll_no;
cout<<"Enter Name:";
cin>>name;
}

void grade::display()
{
cout<<"Roll no is:"<<roll_no<<"\n";
cout<<"Name is:"<<name <<"\n";
}

void grade::input_exam()
{
cout<<"Enter marks of subject1:";
cin>>sub1;
cout<<"Enter marks of subject2:";
cin>>sub2;
cout<<"Enter marks of subject3:";
cin>>sub3;
}

void grade::display_exam()
{
total=sub1+sub2+sub3;
cout<<"Total is :" <<total<<"\n";
}

void grade::average()
{
avg=total/3;
cout<<"Average is :"<<avg<<"\n";
}

int main()
{
grade gd;
gd.input();
gd.input_exam();
gd.display();
gd.display_exam();
gd.average();
return 0;
}
