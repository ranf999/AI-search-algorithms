#ifndef _GLOBAL_H
#define _GLOBAL_H
 
#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<string>

class Node
{
protected:
	string state;
	int cost;
public:
	void setState(string name){this->state = name;}
	void setCost(int cost){this->cost = cost;}
	string getState(){return this->state;}
	int getCost(){return this->cost;}
};

#endif
