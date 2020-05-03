#pragma once
#include <iostream>
#include<string>

using namespace std;

struct event {
	string title;
	string description;
	string day;
	float hour;
	int lvl_inportance;
};

void add_event();
void show_events();

