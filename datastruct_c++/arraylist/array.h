#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>
using namespace std;

typedef int ElemType;

const int MAXSIZE = 100;

struct array
{
	ElemType data[MAXSIZE];
	int length;
};

class arraylist
{
public:
	arraylist();
	bool ListEmpty();
	bool GetElem(int , ElemType &);
	//bool GetElem(array ,int , ElemType &);
	int Locate(ElemType& );
	bool ListInsert(int ,ElemType );
	bool ListDelete(int ,ElemType &);
	int ListLength();
	bool ListTravel();
	void UnionList(array&);
	~arraylist();
private:
	array arr;
};

#endif