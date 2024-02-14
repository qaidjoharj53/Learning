#include<iostream>
using namespace std;
    
class Employee{
    int roll_no;                                                            // Private element (Default)
public:
    int getter(){
        return roll_no;
    }
    void setter(int temp){
        roll_no = temp; 
    }
    int Age;
    string Name;
    string Company;
    void print(){
        cout<<"Name: "<<Name<<"  "<<"Company: "<<Company<<"  "<<"Age: "<<Age<<endl;
    }
    Employee(string name , string company , int age){                       // Parameterized Constructor Called
        Name=name;
        Company=company;
        Age=age;
    }
    Employee(const Employee& temp){                                         // Copy constructor
        this->Name="Husn";
        this->Company=temp.Company;
        this->Age=25;
    }
    ~Employee(){                                                            // Destructor
        cout<<"Destructor called"<<endl;
    }
    static int experience;                                                  // Static member declared
    static int experiencee(){                                               // Static Fun cantake non static members
        return experience;
    }
};
int Employee::experience=5;                                                 // Static member initialised
//                          There is no need to declare object for using static member or functions.
int main(){
    cout<<endl<<"Experience = "<<Employee::experience<<" Years";      // Static member used without object
    cout<<"---"<<Employee::experiencee()<<" Years"<<endl;
    Employee husain=Employee("Husain","Netflix",19);
    husain.getter();
    husain.setter(13);
    husain.print();           cout<<husain.getter()<<endl;
    Employee husn(husain);                                                  // Copy constructor (default)
    husn.print();

    Employee akshit=Employee("Akshit","Google",20);                         // Static parameterized constructor
    akshit.print();
    Employee *lakshit=new Employee("Lakshit","Amazon",21);                  // Dynamic parameterized constructor
    lakshit->print();
    delete lakshit;
    // Static me destructor automatically call hota h but in case of Dynamic manually call karna padta h with delete.                                                         
    return 0;
}