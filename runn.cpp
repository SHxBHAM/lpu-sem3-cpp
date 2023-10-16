#include<iostream>
#include<fstream>
using namespace std;
Class Employee{
    private:
    char name[50];
    char employee_ID[20];
    char joining_Date[20];
    char position[20];
    char maritial_Status[20];
    char age[20];
    char salary[25];
    char comment[20];

    public:
    void getEMP_data(){

        cout<<"Welcome to INFOBRO"<<endl;
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=**=*=*==*=*=*=*"<<endl;
        cout<<"EMployee Name:";
        cin.getline(name,50);
        cout<<"EMployee ID:";
        cin.getline(employee_ID,20);
        cout<<"EMployee Join date:";
        cin.getline(joining_Date,20);
        cout<<"EMployee position:";
        cin.getline(position,20);
        cout<<"EMployee maritial status:";
        cin.getline(maritial_Status,20);
        cout<<"EMployee age:";
        cin.getline(age,20);
        cout<<"EMployee salary:";
        cin.getline(salary,20);
        cout<<"comments:";
        cin.getline(comment,20);
    }

    void showemp_data(){
        cout<<"\n \n EMPLOYEE DATA";
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*";
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<employee_ID<<endl;
        cout<<"JOINING DATE:"<<joining_Date<<endl;
        cout<<"POSITION:"<<position<<endl;
        cout<<"MARR STAT:"<<maritial_Status<<endl;
        cout<<"AGE:"<<age<<endl;
        cout<<"SALARY:"<<salary<<endl;
        cout<<"COMMENTS:"<<comment<<endl;
    }

};
Class Library{
    public:
    Employee emp;
    fstream fp,fp1;
    void writeemployee(){
        fp.open("employees.txt",ios::out);
        if(fp){
            emp.getEMP_data
        }
    }
}