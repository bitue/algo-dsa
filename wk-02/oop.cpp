
#include<bits/stdc++.h>
using namespace std;

class absMethods {
    virtual void checkPromotion() = 0;

};

class Employee: absMethods {
protected:
    string name;
private:
    int age;

    string Company;

public:


    void introduce() {
        cout << name << " " << Company << " " << age << endl;
        return;
    }

    Employee(int a, string n, string c) {
        age = a;
        name = n;
        Company = c;


    }

    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void checkPromotion() {
        if (age > 25) {
            cout << "Congrats " << name << "Promoted" << endl;
        }
        else {
            cout << " " << name << " not Promoted" << endl;

        }
    }

    virtual void doWork() {
        cout << name << " is writing etc " << endl;
    }








};

class Developer: public Employee {

private:
    string favLang;
public:
    Developer(int a, string n, string c, string lang): Employee(a, n, c) {
        favLang = lang;

    }

    void check() {
        cout << name << " has a fav lang is   " << favLang << endl;

    }

    void doWork() {
        cout << name << " is writing " << favLang << "  code " << endl;
    }





};



int main() {



    Developer bitue = Developer(12, "ash", "bs-23", "python");

    bitue.check();
    cout << endl;
    bitue.checkPromotion();
    bitue.doWork();

    Employee* bit = &bitue;
    bit->doWork();


    //cout << res << endl;




}