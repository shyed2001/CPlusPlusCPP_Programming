#include<iostream>
using namespace std;
class student
{
private:
int roll_no;
char name[20];
public:
void input();
void display();
};

void student::input()
{
cout<<"Enter Roll no:";
cin>>roll_no;
cout<<"Enter Name:";
cin>>name;
}

void student::display()
{
cout<<"Roll no is:"<<roll_no<<"\n";
cout<<"Name is:"<<name <<"\n";
}

class exam_inherit:public student
{
private:
int sub1;
int sub2;
int sub3;
int total;
public:
void input_exam();
void display_exam();
};

void exam_inherit::input_exam()
{
cout<<"Enter marks of subject1:";
cin>>sub1;
cout<<"Enter marks of subject2:";
cin>>sub2;
cout<<"Enter marks of subject3:";
cin>>sub3;
}

void exam_inherit::display_exam()
{
total=sub1+sub2+sub3;
cout<<"Total is :" <<total<<"\n";
}

int main()
{
exam_inherit ex;
ex.input();
ex.input_exam();
ex.display();
ex.display_exam();
return 0;
}
