#include<iostream>
#include<string>
#include"employee.h"
using namespace std;
void searchId(Employee arr[], int n, int data);
void searchSalary(Employee arr[], int n, int data);
void searchName(Employee arr[], int n, string data);
int main(){
Employee arr[10];
arr[0].setId(100);
arr[0].setName("aya");
arr[0].setSalary(2000);
arr[1].setId(101);
arr[1].setName("menna");
arr[1].setSalary(1000);
arr[2].setId(102);
arr[2].setName("sara");
arr[2].setSalary(4000);
arr[3].setId(103);
arr[3].setName("ola");
arr[3].setSalary(700);
int x;
cout<<"enter 1 to search ny name , 2 to search by id , 3 to search by salary: ";
cin>>x;
if(x==1){
string name;
cout<<"enter name to search for: ";
cin>>name;
searchName(arr,4,name);
}
else if(x==2)
{
int id;
cout<<"enter ID to search for: ";
cin>>id;
searchId(arr,4,id);
}
else if(x==3)
{int salary;
cout<<"enter salary to search for: ";
cin>>salary;
searchSalary(arr,4,salary);
}
else
    cout<<"invalid option";

/* searchId(arr,4,102);
searchName(arr,4,"menna"); */
return 0;
}
void searchId(Employee arr[], int n, int data){
    bool flag =false;
    for(int i=0;i<n;i++){
        if(data==arr[i].getId())
            {
                flag=true;
                cout<<"\nall information about employee you search for are:\n employee id:"<<arr[i].getId()<<"\nemployee name: "<<arr[i].getName()<<"\nemployee salary: "<<arr[i].getSalary();
            }
    }
    if(!flag)
    cout<<"employee not found";
}
void searchSalary(Employee arr[], int n, int data){
    bool flag =false;
    for(int i=0;i<n;i++){
        if(data==arr[i].getSalary())
            {
                flag=true;
                cout<<"\nall information about employee you search for are:\n employee id:"<<arr[i].getId()<<"\nemployee name: "<<arr[i].getName()<<"\nemployee salary: "<<arr[i].getSalary();
            }
    }
    if(!flag)
    cout<<"employee not found";
}
void searchName(Employee arr[], int n, string data){
    bool flag =false;
    for(int i=0;i<n;i++){
        if(data==arr[i].getName())
            {
                flag=true;
                cout<<"\nall information about employee you search for are:\n employee id:"<<arr[i].getId()<<"\nemployee name: "<<arr[i].getName()<<"\nemployee salary: "<<arr[i].getSalary();
            }
    }
    if(!flag)
    cout<<"employee not found";
}