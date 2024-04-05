#include "Items.hpp"
#include <string>
#include <vector>

using namespace std;

class Todolist {
private:
	vector<Items> listitems;

public:
	void add(string task);
	void complete(string task);
	void all();
	void complete();
	void incomplete();
	void clear();
};