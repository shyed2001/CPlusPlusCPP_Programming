#include<iostream>
using namespace std;
class student
{
protected:
int roll_no;
char name[20];
int sub1;
int sub2;
int sub3;
int total;
};

class show:public student
{
public:
void input();
void display();
};

void show::input()
{
cout<<"Enter Roll no:";
cin>>roll_no;
cout<<"Enter Name:";
cin>>name;
}

void show::display()
{
cout<<"Roll no is:"<<roll_no<<"\n";
cout<<"Name is:"<<name <<"\n";
}

class exam:public student
{
public:
void input_exam();
void total_marks();
};

void exam::input_exam()
{
cout<<"Enter marks of subject1:";
cin>>sub1;
cout<<"Enter marks of subject2:";
cin>>sub2;
cout<<"Enter marks of subject3:";
cin>>sub3;
}

void exam::total_marks()
{
total=sub1+sub2+sub3;
cout<<"Total is :" <<total<<"\n";
}

int main()
{
student st;
show sw;
exam em;
sw.input();
em.input_exam();
sw.display();
em.total_marks();
return 0;
}
