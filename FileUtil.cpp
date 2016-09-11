#include "FileUtil.h"

vector<string> FileUtil::loadFile(string filename)
{
	int i = 0;
	int j = 0;
	vector<string> s;
	ifstream fin(filename);
	if(!fin)
	{
		cout<<"Unable to open"<<endl;
		exit(0);
	}
	while(!fin.eof())
	{
		s.push_back("0");
		getline(fin,s[i]);
		i++;
	}
	fin.close();
	return s;
}

void FileUtil::writeFile(string filename,vector<string> actions,vector<int> costs)
{
	ofstream fout;
	fout.open(filename);
	if(fout.is_open())
	{
		for(int i=0;i<actions.size();i++)
			fout<<actions[i]<<" "<<costs[i]<<endl;
	}
	else
	{
		cout<<"Unable to open<<endl";
	}
	fout.close();
}
