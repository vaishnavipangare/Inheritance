//EXPERIMENT 14
//Name:- Vaishnavi Pangare
//Class:-ENTC A
//PRN:- 25070123501
//Problem Statement:- Write a code to show Multiple Inheritance.

#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void setEmployee(string n, int i) {
        name = n;
        id = i;
    }
};

class Salary {
protected:
    double salary;
public:
    void setSalary(double s) {
        salary = s;
    }
};

class Manager : public Employee, public Salary {
public:
    void display() {
        cout << "Manager Name: " << name << "\n ID: " << id << "\n Salary: Rs " << salary << endl;
    }
};

int main() {
    Manager m;
    m.setEmployee("Vaishnavi Pangare", 101);
    m.setSalary(75000);
    m.display();
    return 0;
}

/*Output:-
Manager Name: Vaishnavi Pangare
ID: 101
Salary: Rs 75000
*/
