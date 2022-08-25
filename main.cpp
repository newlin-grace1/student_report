#include <iostream>
#include<string.h>
#include<conio.h>

using namespace std;
const int t=10;
string sname[t]={};
string smarks[t]={};
class Student
{
public:
    void add();
    void view();
};
    char name[10];
    char marks[10];
void Student::add()
{
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter marks"<<endl;
    cin>>marks;
    for(int i=0;i<10;i++)
    {
        if (sname[i]=="\0")
        {
            sname[i]=name;
            smarks[i]=marks;
            break;
        }
    }
}
void Student::view()
{
            char n;
            cout<<"Enter student name"<<endl;
            cin>>n;
            cout<<"The mark is"<<endl;
            for(int i=0;i<10;i++)
            {
            if (n=name[i])
            {
            cout<<marks[i];
            break;
            }
        }


}
int main()
{
    int a;
    Student s;
    do
    {
        cout<<"1.Add marks"<<endl;
        cout<<"2.View marks"<<endl;
        cout<<"Please enter 1 or 2"<<endl;
        cin>>a;
        switch(a)
        {
        case 1:
            s.add();
            break;
        case 2:

            s.view();
            break;
        }
    }while(a!=2);
    return a;

}
