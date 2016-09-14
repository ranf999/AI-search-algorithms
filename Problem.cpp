#include "Problem.h"
#include "Scan.h"


Problem::Problem(vector<string> file)
{
	Scan scanner;
	this->algo = scanner.getAlgo(file);
	this->startState = scanner.getStart(file);
	this->goalState = scanner.getGoal(file);
	this->map = scanner.getMap(file);
}

string Problem::getAlgo()
{
	return this->algo;
}

string Problem::getStartState()
{
	return this->startState;
}

bool Problem::isGoalState(string state)
{
	if(state.compare(this->goalState)==0)
		return true;
	else
		return false;
}
vector<Node> Problem::getSuccessors(string state)
{
	return map[state];
}

int Problem::getCostOfAction(Node node)
{
	return node.getCost();
}


