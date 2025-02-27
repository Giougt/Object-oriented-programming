int foo (int i, double d, const std::string & r){
    auto int j{}; //the same as: int j = 0;
    :::
    return i + j;
}// j, r, d and i are removed from the stack and the result value (i + j) is pushed onto the stack 

// c++11:
auto res1{ foo(1, 2.0, "abc") };
decltype(res1) res2{ foo(2, 4.5, "def") };

//static demo.hpp
#pragma once

class staticdemo
{
    public:
        static int get_counter()
        {
            //return_member++; // Error can't access instance member
            return counter++;
        }
        int cacl()
        {
            static int a{ 0 };
            int b{ 1 };
            return a++ + B++ +_member;
        }
}


int StaticDemo::Counter{ 5 };

void Demo(void)
{
    StaticDemo sd1;

    assert(5 == StaticDemo::get_Counter());
    assert (6 == sd1.get_Counter());

    //auto r{  StaticDemo::calc() }; // Error 
    assert (1 == sd1.calc());

    StaticDemo sd2;

    assert(7 == sd2.get_Counter());
    assert(8 == StaticDemo::get_Counter());

    assert(2 == sd2.calc());
}

//common.h

#pragma once 

extern const double MY_PI;
extern bool flag;

double sine(double arg);

extern int static_bar; // ?
extern int static_foo(); //?

//-----------------

#include "common.h"

const double MY_PI{ 3.14159 };
bool flag{ false }

double sine(double arg) { ::: }

static int static_bar{ 10 };
static int static_foo() { ::: }

//------------- function overloading 

class foo {
    public:
        void set() { _t = 0; _d = 0.0; }
        void set(int t) { _t = t; }
        void set(double d) { _d = d; }
        void set(int t, double d);

        int get() { return _t; }
        :::
    private:
        int _a;
}

//

Test::Test( char c) {
    _a = 0;
    _b = 0;
}

Test::Test(int n){
    _a = n;
    _b = 0;
}

Test::Test(char c){
    _a = 0;
    :::
}

//------------------------

void tests(){
    Test t1;  // Test()
    Test t2(5); // Test(int)
    Test t3 = 5; // Test(int)
    Test t4 = 'A'; // Test(int) !!!
    Test t5('A');
    Test t6{ 'A' };
    Test t7 (5, 'A');
    Test t8(t4);
    Test t9(&t5);
}

class Foo {
    int _a;
public:
    Foo(int a){
        _a = a;
    }
    Foo(const Y & y) {
        _a = y._a;
    }
};

//----------------

struct Bar {
    int _b;
    char _c;
}

void main()
{
    //Foo a;
    Foo b(100);
    Foo c = 15;
    Foo d{ 10 };
    Foo e(d);
    Foo f{ d };

    Bar b1;
    Bar b2{};
    Bar b3{ 1, 'A' };
    Bar n(b2);
    // Bar m = 15; // Error

    Bar h(); // warning never try empty 
}

---- bar.hpp ----
class Bar {
    :::
    public:
        void init(int a, const string & b);
        :::
};

----- bar.cpp -----
#include "bar.hpp"
:::
void Bar::init(int a, const string & b){
    :::
}

---- main.cpp ------
#include "bar.hpp"
:::
Bar b1(5, "abc");
:::
//b1.Bar(6, )...

// ------- Account.hpp --------
#include <string>

class Account {
    private:
        int _balance;
        std::string _name;
    public:
        Account() : _balance(0) { _name = ""; }

        Account(std:: string name, int balance);
        :::
};

//------ Account.cpp -------
#include "Account.cpp"

Account::Account(std::string name, int balance){ 
        ...
}

//Pointer to object itself - this
class Account {
    private:
        int _balance;
    :::
public:
    Account(int balance) { this->_balance = balance; }
    :::
    void deposit(int amount) { _balance += amount; }
    :::
}; 

//class Destructor

//--- Test.hpp ----
class Test {
    public:
        Test(size_t size) : _size(size) {
            this->_data = new char[_size];
        }
        ~Test();
    private:
        size_t _size;
        char * _data;
};

//----- Test.cpp ----------
Test::~Test() {
    delete [] _data;
}

#include "Test.hpp"

Test t1(1);

void main(){
    Test t2(10U);
    Test* pt3;
    :::
    pt3 = new Test(6); //
    :::
    delete pt3;
} // The destructor ~Test it called for ...

---- Account.hpp -------

class Account {
    :::
    public:
        Account() = default;
        Account(const Account &);
        Account & operator=(const Account &);
        ~Acccount() = default;

}
