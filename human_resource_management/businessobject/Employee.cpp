#include "Employee.h"
#include <string>

Employee::Employee(){};
Employee::Employee(int id, string fName, string mInit, string lName, long ssn, string bDate, string address, char sex, int salary, long superSSN, int dno)
{
    this->Id = id;
    this->FName = fName;
    this->MInit = mInit;
    this->LName = lName;
    this->SSN = ssn;
    this->BDate = bDate;
    this->Address = address;
    this->Sex = sex;
    this->Salary = salary;
    this->SuperSSN = superSSN;
    this->DNO = dno;
}
int Employee::GetID(){
    return Id;
}
string Employee::ToString(){
    string s;
    s += "{";
    s += to_string(Id) + ", ";
    s += FName + ", " + MInit + ", " + LName + ", ";
    s += to_string(SSN) + ", ";
    s += BDate + ", " + Address + ", ";
    s += std::string(1, Sex) + ", ";
    s += to_string(Salary) + ", ";
    s += to_string(SuperSSN) + ", ";
    s += to_string(DNO);
    s += "}";
    return s;

}
json Employee::ToJson(){
    json j;
    j["Id"] = Id;
    j["FName"] = FName;
    j["MInit"] = MInit;
    j["LName"] = LName;
    j["SSN"] = SSN;
    j["BDate"] = BDate;
    j["Address"] = Address;
    j["Sex"] = Sex;
    j["Salary"] = Salary;
    j["SuperSSN"] = SuperSSN;
    j["DNO"] = DNO;
    return j;
}