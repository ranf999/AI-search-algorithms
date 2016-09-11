#include "Scan.h"
#include "Problem.h"

string Scan::getAlgo(vector<string> file)
{
	return file[0];
}

string Scan::getStart(vector<string> file)
{
	return file[1];
}


string Scan::getGoal(vector<string> file)
{
	return file[2];
}

unordered_map<string,vector<Node>> Scan::getMap(vector<string> file)
{
	unordered_map<string,vector<Node>> map;
	int routeNum = atoi(file[3].c_str());
	int cnt = 0;
	string route;   //form:"A B 5"
	string firstState; 
	string secondState;
	string cost;

	for(int i=0;i<routeNum;i++)
	{
		int j;
		vector<Node> nodeList;
		route = file[i+4];// the route list is from 5th line of the file
		for(j=0;j<route.length();j++)
		{
			if(route[j]!=' ')
			{
				switch(cnt)
				{
				case 1:
					firstState.push_back(route[j]);
					break;
				case 2:
					secondState.push_back(route[j]);
					break;
				case 3:
					cost.push_back(route[j]);
					break;
				default:
					break;
				}
			}
			else
			{
				if(route[j+1]!=' ')
					cnt++;
				continue;
			}
		}
		Node node = Node();
		node.setParent(firstState);
		node.setState(secondState);
		node.setCost(atoi(cost.c_str()));
		if(map.count(firstState)>0)
			map[firstState].push_back(node);
		else
		{
			nodeList.push_back(node);
			map[firstState] = nodeList;
		}
	}
	return map;
}
