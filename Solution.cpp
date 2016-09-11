#include "Solution.h"

void Solution::setActions(vector<string> actions)
{
	this->actions = actions;
}

void Solution::setCosts(vector<int> costs)
{
	this->costs = costs;
}

vector<string> Solution::getActions()
{
	return this->actions;
}

vector<int> Solution::getCosts()
{
	return this->costs;
}
