#ifndef _SCAN_H_
#define _SCAN_H_

#include "global.h"

class Scan
{
public:
	string getAlgo(vector<string> file);
	string getStart(vector<string> file);
	string getGoal(vector<string> file);
	unordered_map<string,list<Node>> getMap(vector<string> file);
};

#endif
