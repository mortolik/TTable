#pragma once
#include <iostream> 
#include <string>

using namespace std;

typedef int TKey;
typedef string TValue;

struct TRecord
{
	TKey key;
	TValue val;
};

class TTable
{
protected:
	int DataCount, eff;

public:
	TTable() { DataCount = 0; eff = 0; };
	virtual ~TTable();
	int GetDataCount() { return DataCount; }
	int GetEff() { return eff; }
	void ClearEff() { eff = 0; }
	bool IsEmpty() { return DataCount == 0; }
	virtual bool IsFull() = 0;
	virtual bool Find(TKey key) = 0;
	virtual bool InsRecord(TRecord rec) = 0;
	virtual void DelRecord(TKey key) = 0;
	virtual void Reset() = 0;
	virtual void GoNext() = 0;
	virtual bool IsEnd() = 0;
	virtual TKey GetKey() { } // вернуть текующую запись 

};


