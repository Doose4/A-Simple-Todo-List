#include "Todo.hpp"
#include <iostream>

using namespace std;

void tester() {
	//create a list
	Todolist mainlist;
	mainlist.add("Get bread");
	mainlist.add("Slice bread");
	mainlist.add("Toast bread");
	mainlist.add("Butter bread");
	mainlist.add("Eat bread");
	//list items
	mainlist.all();
	//complete item
	mainlist.complete("Get bread");
	//add new item
	mainlist.add("Eat out :(");
	//list items
	cout << endl;
	mainlist.all();
	//complete new item
	mainlist.complete("Eat out :(");
	//list completed items
	cout << endl;
	mainlist.complete();
	//list incomplete items
	cout << endl;
	mainlist.incomplete();
	//clear list and show
	mainlist.clear();
	cout << endl;
	mainlist.all();

	mainlist.add("Feel Bad");
	cout << endl;
	mainlist.all();

	//new list
	Todolist newlist;
	newlist.add("Workout");
	cout << endl;
	newlist.all();
	cout << endl;
	newlist.complete();
}

int main() {
	tester();

	return 0;
}