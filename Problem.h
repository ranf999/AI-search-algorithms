#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include "global.h"

class Problem
{
private:
	string startState;
	string goalState;
	unordered_map<List> map;
	Problem(vector<string> file);
	~Problem();
public:
	string getStartState();
	bool isGoalState(string state);
	vector<string> getSuccessors(string state);
	int getCostOfActions();
}



#endif
