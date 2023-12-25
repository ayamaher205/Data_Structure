#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    int salary;
    public:
        Employee() {}
        Employee(int ID, string Name,int Salary,int Age) {
        id=ID;
        name=Name;
        salary=Salary;
        }
        void setId(int ID){
         id = ID;
        }
        void setName(string Name){
            name = Name;
            }
        void setSalary(int Salary){
         salary = Salary;
        }
        int getId(){
        return id;
        }
        string getName(){
        return name;
        }
        int getSalary(){
        return salary;
        }
        virtual ~Employee() {}

    protected:

    private:
};

#endif // EMPLOYEE_H
