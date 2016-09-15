#ifndef _SCAN_H_
#define _SCAN_H_

#include "global.h"

class Node;

class Scan
{
public:
	string getAlgo(vector<string> file);
	string getStart(vector<string> file);
	string getGoal(vector<string> file);
	unordered_map<string, int> getSunday(vector<string> file);
	unordered_map<string,vector<Node>> getMap(vector<string> file);
};

#endif
