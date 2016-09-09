#ifndef _SOLUTION_H_
#define _SLUTION_H_

#include "global.h"

class Solution
{
protected:
	vector<string> actions;
	vector<int> costs;
public:
	void setActions(vector<string> actions);
	void setCosts(vector<int> costs);
	vector<string> getActions();
	vector<int> getCosts();
}

#endif
