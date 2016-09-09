#include "scan.h"

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

unordered_map<string,list<Node>> Scan::getMap(vector<string> file)
{
	unordered_map<string,list<Node>> map;
	int routeNum = atoi(file[3].c_str());
	string route;
	string state;
	string cost;
	for(int i=0;i<routeNum;i++)
	{
		int j;
		route = file[i+4];
		for(j=0;j<route.length();j++)
		{
			if(route[j]!=' ')
			{
				
			}
		}
	}
}
