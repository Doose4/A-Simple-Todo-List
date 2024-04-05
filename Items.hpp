#include <string>
#include <vector>

using namespace std;

class Items {
private:
	string task;
	bool status;

public:
	explicit Items(string name);
	string get_task();
	bool get_status();
	void complete_status();
};