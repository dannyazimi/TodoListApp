#include "Task.h"

//Constructor
Task::Task ( const std::string& title, const std::string& dueDate )
    : title ( title ), dueDate ( dueDate ), completed ( false ) {}

//Mark a task as completed
void Task::markCompleted () {
    completed = true;
}

//Edit task details
void Task::editTask ( const std::string& newTitle, const std::string& newDueDate ) {
    title = newTitle;
    dueDate = newDueDate;
}

//Get task details
std::string Task::getDetails () const {
    return "Task: " + title + "\nDue: " + dueDate + "\nCompleted: " + (completed ? "Yes" : "No");
}

//Get task status
bool Task::isCompleted () const {
    return completed;
}

//Get task title
std::string Task::getTitle () const {
    return title;
}