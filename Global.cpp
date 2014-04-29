#include "stdafx.h"
#include "Global.h"


CGlobal::GLOBAL_DATA CGlobal::GetGlobal(const string& key)
{
	auto finded = dataMap.find(key);
	if (finded == dataMap.end())
		throw(0);

	return finded->second;
}

CString CGlobal::GetGlobalString(const string& key)
{
	CGlobal::GLOBAL_DATA data = GetGlobal(key);
	ASSERT(data._type == type::stringType);

	CString result(&data.data[0], data.data.size());
	return result;
}

long CGlobal::GetGlobalLong(const string& key)
{
	CGlobal::GLOBAL_DATA data = GetGlobal(key);
	ASSERT(data._type == type::longType);

	int result;
	memcpy (&result, &data.data[0], sizeof(long));
	return result;
}

double CGlobal::GetGlobalDouble(const string& key)
{
	CGlobal::GLOBAL_DATA data = GetGlobal(key);
	ASSERT(data._type == type::doubleType);

	double result;
	memcpy (&result, &data.data[0], sizeof(double));
	return result;
}

void CGlobal::SetGlobal(string key, CGlobal::GLOBAL_DATA data)
{
	dataMap[key] = data;
}

void CGlobal::SetGlobal(string key, const CString data)
{
	CGlobal::GLOBAL_DATA newdata;
	newdata._type = CGlobal::type::stringType;
	newdata.data.resize(data.GetLength());
	memcpy(&newdata.data[0], (LPCTSTR)data, data.GetLength());

	SetGlobal(key, newdata);
}

void CGlobal::SetGlobal(string key, long data)
{
	CGlobal::GLOBAL_DATA newdata;
	newdata._type = CGlobal::type::longType;
	newdata.data.resize(sizeof(long));
	memcpy(&newdata.data[0], &data, sizeof(long));

	SetGlobal(key, newdata);
}

void CGlobal::SetGlobal(string key, double data)
{
	CGlobal::GLOBAL_DATA newdata;
	newdata._type = CGlobal::type::doubleType;
	newdata.data.resize(sizeof(double));
	memcpy(&newdata.data[0], &data, sizeof(double));

	SetGlobal(key, newdata);
}