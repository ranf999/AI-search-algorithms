#include "Problem.h"
#include "Scan.h"

Problem::Problem(vector<string> file)
{
	Scan scanner;
	this->startState = scanner.getStart(file);
	this->goalState = scanner.getGoal(file);
	this->map = scanner.getMap(file);
}

string Problem::getStartState()
{
	return this->startState;
}

bool Problem::isGoalState(string state)
{
	if(state = this->goalState)
		return true;
	else
		return false;
}


