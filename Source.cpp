#include<iostream>
#include<string>
#include<list>
#include "event.h"
using namespace std;

int main() {
	int action = 0;

	do
	{
		cout << "Add new event press - 1" << endl;
		cout << "Show all events - 2" << endl;

		cout << "Exit - 4" << endl;
		cin >> action;

		switch (action)
		{
		case 1:
			add_event();

			break;
		case 2:
			show_events();

			break;

		default:
			break;
		}

	} while (action !=4);


	return 0;
}