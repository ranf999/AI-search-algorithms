#ifndef _FILEUTIL_H_
#define _FILEUTIL_H_

#include "global.h"
#include <fstream>

using namespace std;

class FileUtil
{
public:
	FileLoader();
	~FileLoader();
	vector<string> loadFile(String filename);
	void writeFile(string filename,vector<String> actions,vector<int> costs);
};

#endif
