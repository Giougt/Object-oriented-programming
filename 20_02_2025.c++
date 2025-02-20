int n { 2'000'000'000 };
int n2 = 2 * n;
unsigned u1 = 2 * n;
unsigned u2 = 3 * n;
double d1 = 3 * n;

// compare c++ compiler  reacction with this initialization style:
unsigned uli{ 2 * n };
unsigned u2i { 3 * n };

double d1 = 3 * n;
double d2{ 3.0 * n };
double d3{ 3 * (double)n };

double d4{ static_cast<double>(3) * n };

double x{ 1 }; // (double)1

long foo(int, char, double); //function declaration 
:::
long k = foo(12, 25, 0.5f); // (12, (char)25, (double)0.5f)

long foo(int n, char k, double w) // function definition 
{
    return k * n * w; // (long)((double))((int)k * n ) * w)
}

#include <ctime>
:::
class DateTime
{
    public:
    :::
    operator std::time_t() const { return _datetime; }; // (1)
    ...
    :::
    private:
    time_t _datetime;
};

void main()
{
    time_t now = time(0); //function time() is declared in <ctime>
    DateTime time1;
    :::// initialize time1
    if ....
}

int var1{ 1 };
int& ref1{ var1 };
ref1 = 20;

void swap(int& a, int& b) // swaps values of 
{
    int tmp = a; a = b; b = tmp;
} 
:::

//swap(5, 6); // Error: Only values (i.e., variable)
auto x{ 5 }, y{ 6 };
swap(x, y); // OK: after invocation x == 6 && y == 5 

int& itemm(size_t i)
{
    static int items[] { 1, 2, 3,}
    ...
}

int a;
int *p { nullptr };
int* q;

a = 5;
p = &a; // link object to pointer 
q = p; //copy pointer 

struct Rectangle { size_t width; size_t height; }; 

// creating and using objects 

Rectangle rect1;
Rectangle rect2{};
Rectangle rect3{ 3,4 };

//member acess with the 'dot' notation
rect1.width = 1;
rect1.height = 2;
rect2 = rect3; // copy assignement 
rect3.height = 2 * rect1.height;

Rectangle rect1;
Rectangle rect2{};

int m[5]; //reserves continuous memory for five integers (5 * 4 = 20 bytes )

int a{ 5 };
m[1] = a;
m[4] = 6;
int b{ a * m[4] };

double a[2][3];

size_t n{ 10 };


class Student
{
    string _id;
    string _name;
public:
    string get_id() const { return _id; }
    string get_name() const;
    :::
}

string Student::get_name() const
{
    _name = "123"; // Error!
    return _name; // OK
}

class Bar
{
    int _b;
public:
    void set_b(int b) { _b = b; }
    int ...
}

