#include <iostream>
#include "Items.hpp"
using namespace std;

Items::Items(string name) {
	this->task = name;
	this->status = true;
};

string Items::get_task() {
	return task;
};

bool Items::get_status() {
	return status;
};

void Items::complete_status() {
	this->status = false;
};