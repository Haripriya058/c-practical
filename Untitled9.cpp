#include<iostream>
#include<string.h>
using namespace std;

class Person 
{
	protected:
		char name[20],address[50];
	public:
		person()
		{
		}
	Person(char Name[],char add[])
	{
		strcpy(name,Name);
		strcpy(address,add);
	}
	virtual void display()=0;
};
class teacher:public Person
{
	char department[10], off_add[50];
	public:
		teacher(char Name[], char add[], char dept[], char aodd[]):
		Person(Name,add){
			strcpy(department,dept);
			strcpy(off_add,aodd);
		}
		void display()
		{
			cout << " Teacher's Name:" << name << endl;
			cout << "Teacher's Address:" << address << endl;
			cout << "Teacher's department:" << department << endl;
			cout << "Teacher's office address:" << off_add<< endl;
		}
};
class student: public Person
{
	char cla[10];
	public:	
    student(char Name[], char add[], char cl[]): Person(Name ,add)
    {
    	strcpy(cla,cl);
	}
	void display()
	{
		cout << "Student's Name:" << name << endl;
		cout << "Student's class:" << cla << endl;
		cout << "Student's address:" << address << endl;
		
	}
};

int main()
{
	Person *p;
	p=new teacher{"abcd","lpo","cs","po"};
	p->display();
	delete p;
	cout << endl;
	p=new student{"ad","lp","cs"};
	p->display();
	delete p;
	cout << endl;
}
