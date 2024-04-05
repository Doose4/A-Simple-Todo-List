#include <iostream>
#include "Todo.hpp"
using namespace std;

void Todolist::add(string task) {
	if (task == "") {
		cout << "Entry was blank, please try again... \n";
		return;
	} 
	vector<Items>::iterator itr;
	for (itr = listitems.begin(); itr < listitems.end(); itr++)
	{
		if (itr->get_task() == task)
		{
			cout << "Entry already exists, please try again... \n";
			return;
		}
	}
	Items newtask = Items(task);
	listitems.push_back(newtask);
};

void Todolist::complete(string task) {
	vector<Items>::iterator itr;
	for (itr = listitems.begin(); itr < listitems.end(); itr++)
	{
		if (itr->get_task() == task)
		{
			itr->complete_status();
		}
	}
};

void Todolist::all() {
	vector<Items>::iterator itr;
	for (itr = listitems.begin(); itr < listitems.end(); itr++)
	{
		cout << itr->get_task() << endl;
	}
};

void Todolist::complete() {
	vector<Items>::iterator itr;
	for (itr = listitems.begin(); itr < listitems.end(); itr++)
	{
		if (itr->get_status() == false)
		{
			cout << itr->get_task() << endl;
		}
	}
};

void Todolist::incomplete() {
	vector<Items>::iterator itr;
	for (itr = listitems.begin(); itr < listitems.end(); itr++)
	{
		if (itr->get_status() == true)
		{
			cout << itr->get_task() << endl;
		}
	}
};

void Todolist::clear() {
	int siz = listitems.size();
	for (int i = 0; i < siz; i++)
	{
		listitems.pop_back();
	}
};