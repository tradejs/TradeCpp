#include "stdafx.h"
#include "Storage.h"


CStorage::CStorage()
{
	db.open("storage.db3", SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE);

	db.execDML("create table if not exists data (key varchar(100) NOT NULL PRIMARY KEY, type integer, value varchar(1500));");
}

CString CStorage::GetData(const CString& key)
{
	CppSQLite3Buffer buffer;
	buffer.format("select value from data where key='%s'", (LPCTSTR)key);
	CppSQLite3Query query = db.execQuery(buffer);

	if(query.eof())
		return "";

	return query.getStringField(0);
}

void CStorage::SetData(const CString& key, const CString& data)
{
	CppSQLite3Buffer buffer;
	buffer.format("insert or replace into data(key,type,value) values ('%s',0,'%s');"
		, (LPCTSTR)key, (LPCTSTR)data);

	db.execDML(buffer);	
}