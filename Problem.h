#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include "global.h"

class Node
{
protected:
	string parent;
	string state;
	int cost;
public:
	void setState(string name){this->state = name;}
	void setCost(int cost){this->cost = cost;}
	void setParent(string name){this->parent = name;}
	string getState(){return this->state;}
	string getParent(){return this->parent;}
	int getCost(){return this->cost;}
};

class Problem
{
protected:
	string algo;
	string startState;
	string goalState;
	unordered_map<string,vector<Node>> map;
	
public:
	Problem(vector<string> file);
	string getAlgo();
	string getStartState();
	bool isGoalState(string state);
	vector<Node> getSuccessors(string state);
	int getCostOfAction(Node node);
};



#endif
