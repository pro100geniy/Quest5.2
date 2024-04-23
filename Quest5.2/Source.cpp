
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

void swap(Time& firstTime, Time& secondTime) {
	const Time temp = secondTime;
	secondTime = firstTime;
	firstTime = temp;
}
void swap(int& value1, int& value2) {
	const int temp = value2;
	value2 = value1;
	value1 = temp;
}

inline void output(Time firstTime, Time secondTime, string article) {
	cout << " функция " << "Main " << article << " замены: " << firstTime.hours << ":" << firstTime.minutes << ":" << firstTime.seconds << "\t" << secondTime.hours << ":" << secondTime.minutes << ":" << secondTime.seconds << endl;
};
inline void output(int value1, int value2, string article) {
	cout << " функция " << "Main " << article << " замены: " << value1 << "\t" << value2 << endl;
};


int main()
{
	setlocale(0, "");
	int val1 = 5;
	int val2 = 10;
	Time time1 = { 11,11,11 };
	Time time2 = { 22,22,22 };

	output(time1, time2, "до");
	output(val1, val2, "до");
	swap(time1, time2);
	output(time1, time2, "после");
	swap(val1, val2);
	output(val1, val2, "после");


}
