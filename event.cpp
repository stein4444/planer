#include "event.h"
#include <iostream>
#include <string>
#include <list>
#include <windows.h>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
list <event> event_list;
event info;
void add_event()
{

	cout << "Enter title of your event: ";
	cin.ignore();
	getline(cin, info.title);
	cout << "Enter a discription of event: ";
	getline(cin, info.description);
	cout << "Enter day: ";
	cin >> info.day;
	cout << "Enter time: ";
	cin >> info.hour;
	cout << "Enter importance level from 1 to 3: ";
	if (info.lvl_inportance > 3 && info.lvl_inportance < 1) {
		cout << "Enter from 1 to 3 !!!!! : ";
		cin >> info.lvl_inportance;
	}
	else
		cin >> info.lvl_inportance;
	event_list.push_back(info);


}





void show_events()
{
			for (event item : event_list) {
				if (item.lvl_inportance == 1) {
					SetConsoleTextAttribute(color, 2);
					cout << "*************************************************************" << endl;
					cout << item.title << endl;
					cout << item.description << endl;
					cout << item.day << endl;
					cout << item.hour << endl;
					cout << "*************************************************************" << endl;
					SetConsoleTextAttribute(color, 2);
				}
				else if (item.lvl_inportance == 2)
				{
					SetConsoleTextAttribute(color, 6);
					cout << "*************************************************************" << endl;
					cout << item.title << endl;
					cout << item.description << endl;
					cout << item.day << endl;
					cout << item.hour << endl;
					cout << "*************************************************************" << endl;
					SetConsoleTextAttribute(color, 2);
				}

				else if (item.lvl_inportance == 3) {
					SetConsoleTextAttribute(color, 4);
					cout << "*************************************************************" << endl;
					cout << item.title << endl;
					cout << item.description << endl;
					cout << item.day << endl;
					cout << item.hour << endl;
					cout << "*************************************************************" << endl;
					SetConsoleTextAttribute(color, 2);
				}

			}

}

