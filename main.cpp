#include <iostream>
#include "global.h"
#include "Problem.h"
#include "Search.h"
#include "FileUtil.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<string> fileStr;
	FileUtil file;
	fileStr = file.loadFile("input.txt");
	Problem problem = Problem(fileStr);
	Solution solution;
	Search search;
	solution = search.doSearch(problem);
	file.writeFile("output.txt",solution.getActions(),solution.getCosts());
	return 0;
}
