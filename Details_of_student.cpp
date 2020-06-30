#include<iostream.h>
using namespace std;
class student
{
	private: char name[10],reg[10],sem[10],branch[10],sec[10];
	public:void input();
	public:void display();
};
void student::input()
{
		cout<<"ENTER STUDENT DETAILS: "<<endl;
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Register Number: ";
		cin>>reg;
		cout<<"Enter Sem: ";
		cin>>sem;
		cout<<"Enter Branch: ";
		cin>>branch;
		cout<<"Enter Section: ";
		cin>>sec;
		cout<<endl;
}
void student::display()
{
	cout<<"ENTERED STUDENT DETAILS IS: ";
		cout<<"\nName: "<<name;
		cout<<"\nReg No: "<<reg;
		cout<<"\nSem: "<<sem;
		cout<<"\nBranch: "<<branch;
		cout<<"\nSection: "<<sec;
}
int main()
{
	student s;
	s.input();
	s.display();
}
