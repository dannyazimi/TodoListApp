#ifndef TASK_H
#define TASK_H
#pragma once

#include <string>

class Task {
private:
	//Define a title and due date, both should be string. Also define a boolean if completed
	std::string title;
	std::string dueDate;
	bool completed;

public:
	//Build a new task
	Task ( const std::string& title, const std::string& dueDate );

	//Mark a task completed, doesn't return anything
	void markCompleted ();
	//Edit a task. Inputs are newTitle and newDueDate and changes a task
	void editTask ( const std::string& newTitle, const std::string& newDueDate );

	//getters
	std::string getDetails () const;
	bool isCompleted () const;
	std::string getTitle () const;


};

#endif
