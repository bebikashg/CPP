#include <iostream>
#include <string>

using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

class Person {
private:
    string name;
    Date dob;
public:
    Person(string name, Date dob) {
        this->name = name;
        this->dob = dob;
    }

    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dob.year << "-" << dob.month << "-" << dob.day << endl;
    }
};

int main() {
    Date dob1 = {1990, 4, 15};
    Person person1("John Smith", dob1);
    person1.printInfo();

    Date dob2 = {1995, 7, 20};
    Person person2("Jane Doe", dob2);
    person2.printInfo();

    return 0;
}
