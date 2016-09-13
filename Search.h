#ifndef _SEARCH_H_
#define _SEARCH_H_

#include "global.h"
#include "Problem.h"
#include "Solution.h"

class Search
{
public:
	Solution doSearch(Problem problem);
	Solution DFS(Problem problem);
	Solution BFS(Problem problem);
	Solution UCS(Problem problem);
	Solution Astar(Problem problem);
};

#endif
