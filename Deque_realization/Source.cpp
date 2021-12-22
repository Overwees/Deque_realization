#include <iostream>
#include <windows.h>
#include <string>
#include "LDeque.cpp"
using namespace std;
void deque_INT();
void deque_DOUBLE();
void deque_CONST_CHAR();
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int type;
	while (true)
	{
		cout << "1. int\n";
		cout << "2. double\n";
		cout << "3. const char*\n";
		cout << "\n0.���������� ������\n";
		cout << "=============================\n";
		cout << "�������� ��� ����:";
		cin >> type;
		if (type == 0)
			break;
		system("Cls");
		switch (type)
		{
		case 1:
			deque_INT();
			break;
		case 2:
			deque_DOUBLE();
			break;
		case 3:
			deque_CONST_CHAR();
			break;
		default:
			cout << "������ ������ �����!";
			break;
		}
	}
	return 0;
}

void deque_INT()
{
	int op;
	int a;
	LDeque <int> deque;
	while (true)
	{
		cout << "\n";
		cout << "1. �������� � ������ ����\n";
		cout << "2. �������� � ����� ����\n\n";
		cout << "3. ������� ������� �� ������ ����\n";
		cout << "4. ������� ������� �� ����� ����\n\n";
		cout << "5. ������� ����� ��������� � ����\n";
		cout << "6. ������� �������� ���� � ������\n";
		cout << "7. ������� �������� ���� � �����\n";
		cout << "\n\n0. ��������� ������\n";
		cout << "=============================\n";
		cout << "�������� �����:";
		cin >> op;
		system("Cls");
		if (op == 0)
			break;
		switch (op)
		{
		case 1:
			cout << "������� �����:";
			cin >> a;
			deque.Push_front(a);
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 2:
			cout << "������� �����:";
			cin >> a;
			deque.Push_back(a);
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 3:
			deque.Pop_front();
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 4:
			deque.Pop_back();
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 5:
			cout << "����� ��������� � ���� - " << deque.GetSize();
			break;
		case 6:
			deque.WriteFromBegin(cout);
			break;
		case 7:
			deque.WriteFromEnd(cout);
			break;
		default:
			cout << "������ ������ �����!";
			break;
		}
		cout << endl;
		system("pause");
		system("Cls");
	}
}

void deque_DOUBLE()
{
	int op;
	double a;
	LDeque <double> deque;
	while (true)
	{
		cout << "\n";
		cout << "1. �������� � ������ ����\n";
		cout << "2. �������� � ����� ����\n\n";
		cout << "3. ������� ������� �� ������ ����\n";
		cout << "4. ������� ������� �� ����� ����\n\n";
		cout << "5. ������� ����� ��������� � ����\n";
		cout << "6. ������� �������� ���� � ������\n";
		cout << "7. ������� �������� ���� � �����\n";
		cout << "\n\n0. ��������� ������\n";
		cout << "=============================\n";
		cout << "�������� �����:";
		cin >> op;
		system("Cls");
		if (op == 0)
			break;
		switch (op)
		{
		case 1:
			cout << "������� �����:";
			cin >> a;
			deque.Push_front(a);
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 2:
			cout << "������� �����:";
			cin >> a;
			deque.Push_back(a);
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 3:
			deque.Pop_front();
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 4:
			deque.Pop_back();
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 5:
			cout << "����� ��������� � ���� - " << deque.GetSize();
			break;
		case 6:
			deque.WriteFromBegin(cout);
			break;
		case 7:
			deque.WriteFromEnd(cout);
			break;
		default:
			cout << "������ ������ �����!";
			break;
		}
		cout << endl;
		system("pause");
		system("Cls");
	}
}

void deque_CONST_CHAR()
{
	int op;
	string s;
	const char* a;
	LDeque <const char*> deque;
	while (true)
	{
		cout << "\n";
		cout << "1. �������� � ������ ����\n";
		cout << "2. �������� � ����� ����\n\n";
		cout << "3. ������� ������� �� ������ ����\n";
		cout << "4. ������� ������� �� ����� ����\n\n";
		cout << "5. ������� ����� ��������� � ����\n";
		cout << "6. ������� �������� ���� � ������\n";
		cout << "7. ������� �������� ���� � �����\n";
		cout << "\n\n0. ��������� ������\n";
		cout << "=============================\n";
		cout << "�������� �����:";
		cin >> op;
		system("Cls");
		if (op == 0)
			break;
		switch (op)
		{
		case 1:
			cin.ignore();
			cout << "������� ������:";
			getline(cin,s);
			a = s.data();
			deque.Push_front(a);
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 2:
			cin.ignore();
			cout << "������� ������:";
			getline(cin, s);
			a = s.data();
			deque.Push_back(a);
			system("Cls");
			deque.WriteFromBegin(cout);
			break;

		case 3:
			deque.Pop_front();
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 4:
			deque.Pop_back();
			system("Cls");
			deque.WriteFromBegin(cout);
			break;
		case 5:
			cout << "����� ��������� � ���� - " << deque.GetSize();
			break;
		case 6:
			deque.WriteFromBegin(cout);
			break;
		case 7:
			deque.WriteFromEnd(cout);
			break;
		default:
			cout << "������ ������ �����!";
			break;
		}
		cout << endl;
		system("pause");
		system("Cls");
	}
}