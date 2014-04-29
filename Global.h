#pragma once
#include <string>

class CGlobal
{
private:
	enum type
	{
		stringType = 0,
		longType,
		doubleType
	};

	struct GLOBAL_DATA
	{
		type _type;
		vector<char> data;
	};

public:
	
	void SetGlobal(string key, const CString data);
	void SetGlobal(string key, long data);
	void SetGlobal(string key, double data);

	CString GetGlobalString(const string& key);
	long GetGlobalLong(const string& key);
	double GetGlobalDouble(const string& key);

private:
	map<string, GLOBAL_DATA> dataMap;
	GLOBAL_DATA GetGlobal(const string& key);
	void SetGlobal(string key, CGlobal::GLOBAL_DATA data);
};
static CGlobal gGlobal;

