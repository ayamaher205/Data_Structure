#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
private:
    int id;
    char* name;
    int salary;
    int age;
    public:
        Employee() {}
        Employee(int ID, char* Name,int Salary,int Age) {
        id=ID;
        name=Name;
        salary=Salary;
        age=Age;
        }
        void setId(int ID){
         id = ID;
        }
        int getId(){
        return id;
        }
        virtual ~Employee() {}

    protected:

    private:
};

#endif // EMPLOYEE_H
