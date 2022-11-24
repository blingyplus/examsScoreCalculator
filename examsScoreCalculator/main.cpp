#include<iostream>
#include<conio.h>
using namespace std;
class student
{public:
int rollno;
string name;
void getdata()
{       cout<<"Enter Your Name : ";
        cin>>name;} };
class marks:public student
{   public:
    int m1,m2,m3,total;
    void getmarks(){
cout<<"\nEnter Marks for English: ";
cin>>m1;
cout<<"Enter Marks for Science: " ;
cin>>m2;
cout<<"Enter Marks for Mathematics: " ;
cin>>m3;
    total = (m1+m2+m3); }
void display()
{
cout<<"\n\n***Student Details***\n";
cout<<"Name of Student :       "<<name<<endl;
cout<<"Marks for English :     "<<m1<<endl;
cout<<"Marks for Science:      "<<m2<<endl;
cout<<"Marks for Mathematics : "<<m3<<endl;
cout<<"\nTotal Marks :         "<<total<<endl; }};
int main()
{
marks stud;
stud.getdata();
stud.getmarks();
stud.display();
getch(); }
