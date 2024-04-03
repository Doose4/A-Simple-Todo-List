#include <iostream>
#include "Todo.hpp"
using namespace std;

Todolist::Todolist(string task, vector<string> *tags = nullptr) {
	if (task == "")
	{
		cout << "This task is blank, please try again..." << endl;
		return;
	}
	this->task = task;
	this->status = false;
	liststags.push_back(tags);


	vector<string>::iterator ptr;

	for (ptr = liststags.begin(); ptr < liststags.end(); ptr++)
	{
		liststags.push_back(*ptr);
	}

	liststags = tags;

};