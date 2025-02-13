// while loop

while (condition)
    statement
    
//
int i{10};
while (i > 0)
{
    std::cout << i << " " // 10 9 ... 1
    i--; //i.e , i = i -1
}

std::cout << i << std::endl; //0

// general loop statement 

for (initialization; condition; iteration-expression)
    statement;

//
for (int i{}; i < 10; i++)
    std::cout << i << " "; // 0 1 2 3 4 5 6  7 
std::cout << std::endl; // i is not available 

//

int i{};
while (i<10){
    std::cout << i << " ";
    i++;
}
std::cout << i << std::endl; // i value still exists and is equal to 10 

//
#include <vector> 
#include <string>
:::
#include "Task.hpp"

using namespace std;

class TodoList
{
    public:
    void add_task(Task task);
    void add_task(string description, Task::PRIORITY priority, datetime due_time);
    :::

    private:
    vector<Task> _tasks;
};

:::

#include "TodoList.hpp"

:::

void TodoList::add_task(Task task)
{
    if (!task.is_due())
        _tasks.push_back(task);
} // semicolon at the end not mandatory

::: 
//
#include "TodoList.hpp"
:::
int main()
{
    Tasklist todos;
    auto test_time{std::chrono::system_clock::now()}
    :::
}

//

class task 
{
    public:
    :::
    void toggle_done()
    {
        _done = !_done;
    }
    :::
    private:
    bool _done;
    :::
};

// vsibility scope
// block 

int main()
{
    val = 5; // Error: identifier val is not yet defined 

    int val; // val scope begins 
    val = 5; // ok 
    {
        int b{ 10 };

        b+= val; // 10 
    } // b scope ends
    val += b; // Error: b is not available anymore 

    for (int i{})
    ... ... ...
}

// class scope 
using namespace  std;

class Task
{
    string _description 
    :::
public:
    //string _description() { return _description; } // Error: identifier_description is already introduced 
    void set_description(string description) { _description = description; } // set
    string get_description() const { return _decription; } //return a copy of _description
};

int main(){
    // 
    Task task1;
    task1.set_description("Buy a milk");
    task1
    ... ... ...
}

// namespace scope 
void foo(){ ::: }

namespace ns1
{
    void foo(){ ::: }
    class Bar
    {
        public:
        void baz()
        {
            foo();
            ::foo();
        }
    };
}

namespace ns2
{
    void foo(){ ::: ns1::foo(); ::: }
}

:::
int main()
{
    foo();
    ns1::Bar b1;

    using namespace ns1;
    Bar b2;
    ::foo();

    ns1::foo();
    ns2::foo();
    :::
}

:::
constexpr double pi{ 3.14};
:::

int main()
{
    std::cout << pi << std::endl;
    :::
    std::string pi{ "Pi" };
    std::cout << pi << std::endl
}
