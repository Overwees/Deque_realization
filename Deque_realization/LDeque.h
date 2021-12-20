#pragma once
#ifndef __LDueue_defined__
#define __LDueue_defined__
#include <iostream>
#pragma warning(disable:4996)
using namespace std;


template <typename InfoType = int>
class LDeque
{
	struct DItem {
		InfoType info;
		DItem* next;
		DItem* previous;
		DItem(InfoType AInfo) : info(AInfo), next(NULL), previous(NULL) {}
	};
	DItem* front, * rear, * back;
	unsigned size;

	void Erase();
	void Clone(const LDeque&);
public:
	LDeque() : front(NULL), back(front), rear(NULL), size(0) {};
	LDeque(const LDeque&);
	~LDeque();
	LDeque& operator = (const LDeque&);

	void Push_back(InfoType AInfo);
	void Push_front(InfoType AInfo);

	bool Pop_front();
	bool Pop_back();

	unsigned GetSize() const;

	void WriteFromBegin(ostream&);
	void WriteFromEnd(ostream&);
};

#endif