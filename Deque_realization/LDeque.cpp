#include "LDeque.h"

template <typename InfoType>
void LDeque<InfoType>::Erase() 
{
	while (Pop_front());
	size = 0;
}

template <typename InfoType>
void LDeque<InfoType>::Clone(const LDeque& D)
{
	DItem* tmp = D.front;
	for (unsigned i = 0; i < D.size; i++) 
	{
		Push_back(tmp->info);
		tmp = tmp->next;
	}
}

template <typename InfoType>
LDeque<InfoType>::LDeque(const LDeque& D)
{
	size = 0; 
	Clone(D);
}

template <typename InfoType>
LDeque<InfoType>::~LDeque()
{
	Erase();
}

template <typename InfoType>
LDeque<InfoType>& LDeque<InfoType>::operator = (const  LDeque& D)
{
	if (this != &D) 
	{
		Erase();
		Clone(D);
	}
	return *this;
}

template <typename InfoType>
void LDeque<InfoType>::Push_back(InfoType AInfo)
{
	DItem* tmp = new DItem(AInfo);
	rear = back;
	DItem* prev_tmp = rear;
	if (size > 0)
	{
		rear->next = tmp;
		back = tmp;
	}
	else
	{
		front = tmp;
		back = tmp;
	}
	rear = tmp;
	rear->previous = prev_tmp;
	size++;
}

template<typename InfoType>
void LDeque<InfoType>::Push_front(InfoType AInfo)
{
	DItem* tmp = new DItem(AInfo);
	rear = front;
	DItem* next_tmp = rear;
	if (size > 0)
	{
		rear->previous = tmp;
		front = tmp;
	}
	else
	{
		front = tmp;
		back = tmp;
	}
	rear = tmp;
	rear->next = next_tmp;
		size++;
}

template <typename InfoType>
bool LDeque<InfoType>::Pop_front()
{
	if (size == 0)
		return false;
	DItem* tmp = front;
	front = front->next;
	delete tmp;
	size--;
	if (size == 0)
		rear = NULL;
	return true;
}

template<typename InfoType>
bool LDeque<InfoType>::Pop_back()
{
	if (size == 0)
		return false;
	DItem* tmp = back;
	back = back->previous;
	delete tmp;
	size--;
	if (size == 0)
		rear = NULL;
	return true;
}

template <typename InfoType>
unsigned LDeque<InfoType>::GetSize() const
{
	return size;
}

template<typename InfoType>
void LDeque<InfoType>::WriteFromBegin(ostream& s)
{
	if (size != 0)
	{
		DItem* tmp = front;
		s << "Элементы дека:\n";
		for (unsigned i = 0; i < size; i++)
		{
			s << tmp->info << " ";
			tmp = tmp->next;
		}
		s << endl;
	}
	else
		s << "Дек Пуст!" << endl;
}

template<typename InfoType>
void LDeque<InfoType>::WriteFromEnd(ostream& s)
{
	if (size != 0)
	{
		DItem* tmp = back;
		s<<"Элементы дека:\n";
		for (unsigned i = 0; i < size; i++)
		{
			s << tmp->info << " ";
			tmp = tmp->previous;
		}
		s << endl;
	}
	else
		s << "Дек Пуст!" << endl;
}


//=====================================================================
//=====================================================================


template<>
LDeque <const char*>::DItem::DItem(const char* AInfo) :next(NULL), previous(NULL)
{
	info = new char[strlen(AInfo) + 1];
	strcpy((char*)info, AInfo);
}

template <>
bool LDeque <const char*> ::Pop_front() {
	if (size == 0)
		return false;
	DItem* tmp = front;
	front = front->next;
	delete[] tmp->info;
	delete tmp;
	size--;
	if (size == 0)
		rear = NULL;
	return true;
}

template <>
bool LDeque <const char*> ::Pop_back() {
	if (size == 0)
		return false;
	DItem* tmp = back;
	back = back->previous;
	delete[] tmp->info;
	delete tmp;
	size--;
	if (size == 0)
		rear = NULL;
	return true;
}

template<>
void LDeque<const char*>::WriteFromBegin(ostream& s)
{
	if (size != 0)
	{
		DItem* tmp = front;
		s << "Элементы дека:\n";
		for (unsigned i = 0; i < size; i++)
		{
			s << tmp->info << "; ";
			tmp = tmp->next;
		}
		s << endl;
	}
	else
		s << "Дек Пуст!" << endl;
}

template <>
void LDeque<const char*>::WriteFromEnd(ostream& s)
{
	if (size != 0)
	{
		DItem* tmp = back;
		s << "Элементы дека:\n";
		for (unsigned i = 0; i < size; i++)
		{
			s << tmp->info << "; ";
			tmp = tmp->previous;
		}
		s << endl;
	}
	else
		s << "Дек Пуст!" << endl;
}