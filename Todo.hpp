#include <string>
#include <vector>

using namespace std;

class Todolist {
private:
	string task;
	bool status;
	vector<string> liststags = {};
	//int* ptr;

public:
	explicit Todolist(string task, vector<string> *tags = nullptr);
};