#include<iostream>
using namespace std;
class Employee{
    double salary;
    int hrs;

public:
    Employee(){
        
    }
        void getInfo(){
            cout << "Enter Salary of Employee: ";
            cin >> salary;
            cout << "Enter Number of Working Hours: ";
            cin >> hrs;
        }
        void AddSal(){
            if(salary < 500)
                salary += 10;
        }
        void AddWork(){
            if(hrs > 6)
                salary += 5;
        }
        void disp(){
            cout << salary;
        }
};

int main(){
    Employee e;
   
        e.getInfo();
        e.AddSal();
        e.AddWork();
        cout << "\nFinal Salary of Employee is:   " ;
        e.disp();
    

}

