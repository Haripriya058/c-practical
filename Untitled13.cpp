#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class student
{
    int rno;
    char name[20];
    int Class;
    int age;
    float mark;
    public:
        void get()
            {
                cout<<"\nEnter data: Roll no Name Class Age Marks\n";
                cin>>rno>>name>>Class>>age>>mark;
            }
        void disp()
            {
                cout<<"\nRoll no\tName\tClass\tage\tMarks\n";
                cout<<"=============================\n";
                cout<<rno<<"\t"<<name<<"\t"<<Class<<"\t"<<age<<"\t"<<mark<<endl;
            }
};
int main()
{
    fstream f;
    f.open("school.txt");
    student s;
    s.get();
    f.write((char*)&s,sizeof(s));
    while(f.read((char*)&s,sizeof(s)));
    s.disp();
    
}
