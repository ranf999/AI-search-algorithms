#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include "global.h"

class Node
{
	friend class NodeCmp;
	friend class NodeCmpSunday;
protected:
	string parent;
	string state;
	int cost;
	int sunday;
public:
	void setState(string name){this->state = name;}
	void setCost(int cost){this->cost = cost;}
	void setParent(string name){this->parent = name;}
	void setSunday(int sunday){this->sunday = sunday;}
	string getState(){return this->state;}
	string getParent(){return this->parent;}
	int getCost(){return this->cost;}
	int getSunday(){return this->sunday;}
};

class NodeCmp
{
public:
	bool operator() (const Node &lhs, const Node &rhs) const
	{
		if (lhs.cost > rhs.cost)
			return true;
		else 
			return false;
	}
};

class NodeCmpSunday
{
public:
	bool operator() (const Node &lhs, const Node &rhs) const
	{
		if(lhs.sunday+lhs.cost > rhs.sunday+rhs.cost)
			return true;
		else
			return false;
	}
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
