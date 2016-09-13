#include "Search.h"
#include "Scan.h"

Solution Search::doSearch(Problem problem)
{
	Solution solution;
	switch(problem.getAlgo()[0])
	{
		case 'B': case 'b':
			solution = BFS(problem);
			break;
		case 'D': case 'd':
			solution = DFS(problem);
			break;
		case 'U': case 'u':
			solution = UCS(problem);
			break;
		case 'A': case 'a':
			solution = Astar(problem);
			break;
	}
	return solution;
}

Solution Search::BFS(Problem problem)
{
	string state;  //
	int depth = 0;  //depth of search tree
	vector<int> pathCosts;
	Solution solution;
	vector<string> actions;//results
	stack<string> tmp;//
	queue<string> frontier;
   	set<string> explored;	
	unordered_map<string,string> parent;//find parent node
	vector<Node> successors;

	state = problem.getStartState();
	actions.push_back(state);
	
	if(problem.isGoalState(state))
	{ 
		pathCosts.push_back(0);
		solution.setActions(actions);
		solution.setCosts(pathCosts);
		return solution;
	}
	frontier.push(state);
	while(!frontier.empty())
	{
		pathCosts.push_back(depth);
		depth++;
		state = frontier.front();
		frontier.pop();
		explored.insert(state);
		successors = problem.getSuccessors(state);
		for(auto node:successors)
		{
			if(explored.count(node.getState())==0)
			{
				parent[node.getState()] = node.getParent();
				if(problem.isGoalState(node.getState()))
				{
					//build solution
					pathCosts.push_back(depth);
					string child = node.getState();
					while(child.compare(problem.getStartState())!=0)
					{
						tmp.push(child);
						child = parent[child];
					}
					while(!tmp.empty())
					{
						actions.push_back(tmp.top());
						tmp.pop();
					}
					solution.setActions(actions);
					solution.setCosts(pathCosts);
					return solution;
				}
				frontier.push(node.getState());
			}	
		}
	}
}

Solution Search::DFS(Problem problem)
{
	string state;  //
	int depth = 0;  //depth of search tree
	vector<int> pathCosts;
	Solution solution;
	vector<string> actions;//results
	stack<string> tmp;//
	stack<string> frontier;
	set<string> explored;
	unordered_map<string, string> parent;//find parent node
	vector<Node> successors;

	state = problem.getStartState();
	actions.push_back(state);

	if (problem.isGoalState(state))
	{
		pathCosts.push_back(0);
		solution.setActions(actions);
		solution.setCosts(pathCosts);
		return solution;
	}
	frontier.push(state);
	while (!frontier.empty())
	{
		pathCosts.push_back(depth);
		depth++;
		state = frontier.top();
		frontier.pop();
		if (problem.isGoalState(state))
		{
			//build solution
			pathCosts.push_back(depth);
			string child = state;
			while (child.compare(problem.getStartState()) != 0)
			{
				tmp.push(child);
				child = parent[child];
			}
			while (!tmp.empty())
			{
				actions.push_back(tmp.top());
				tmp.pop();
			}
			solution.setActions(actions);
			solution.setCosts(pathCosts);
			return solution;
		}
		explored.insert(state);
		successors = problem.getSuccessors(state);
		for (int i=successors.size()-1; i>=0 ; i--)
		{
			Node node = successors[i];
			if (explored.count(node.getState()) == 0)
			{
				parent[node.getState()] = node.getParent();
				frontier.push(node.getState());
			}
		}
	}
}

Solution Search::UCS(Problem problem)
{
	Solution solution;
	return solution;
}

Solution Search::Astar(Problem problem)
{
	Solution solution;
	return solution;
}



