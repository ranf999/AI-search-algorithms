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
	string name;
	int cost;
public:
	void setName(string name){this->name = name;}
	void setCost(int cost){this->cost = cost;}
	string getName(){return this->name;}
	int getCost(){return this->cost;}
};

#endif
