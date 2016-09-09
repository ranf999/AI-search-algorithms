#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include "global.h"

class Problem
{
protected:
	string algo;
	string startState;
	string goalState;
	unordered_map<string,vector<Node>> map;
	Problem(vector<string> file);
	~Problem();
public:
	string getAlgo();
	string getStartState();
	bool isGoalState(string state);
	vector<Node> getSuccessors(string state);
	int getCostOfAction(Node node);
};



#endif
