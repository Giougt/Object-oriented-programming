// while loop

while (condition)
    statement
    
//
int i{10};
while (i > 0)
{
    std:: cout << i << " " // 10 9 ... 1
    i--; //i.e , i = i -1
}

std:: cout << i << std::endl; //0

// general loop statement 

for (initialization; condition; iteration-expression)
    statement;

//
for (int i{}; i < 10; i++)
    std:: cout << i << " "; // 0 1 2 3 4 5 6  7 
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
