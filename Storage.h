#pragma once
#include "CppSQLite3.h"

class CStorage
{
public:
	CStorage();
	
	CString GetData(const CString& key);
	void SetData(const CString& key, const CString& data);

private:
	CppSQLite3DB db;
};
static CStorage gStorage;
