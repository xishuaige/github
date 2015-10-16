#include "array.h"

arraylist::arraylist()
{
	arr.length = 0;
	for(int i = 0; i< MAXSIZE; i++)
	{
		arr.data[i] = 0;
	}
}

bool arraylist::ListEmpty()
{
	if(arr.length == 0)
		return true;
	else
		return false;
}

//bool GetElem(array arr1,int pos, ElemType &ptr)
//{
//	if(arr1.data == 0 || pos < 1|| pos>arr1.length)
//		return false;
//	else
//		ptr = arr1.data[pos - 1];
//	return true;
//}

bool arraylist::GetElem(int pos, ElemType& ptr)
{
	if(arr.data == 0 || pos < 1|| pos>arr.length)
		return false;
	else
		ptr = arr.data[pos - 1];
	return true;
}

int arraylist::Locate(ElemType& Elem)
{
	for(int i = 0; i<arr.length; i++)
	{
		if(Elem == arr.data[i])
			return i+1;
	}
	return 0;
}

bool arraylist::ListInsert(int pos,ElemType Elem)
{
	if(arr.length == MAXSIZE)
	{
		return false;
	}
	if(pos > arr.length + 1 || pos < 1)
	{
		return false;
	}
	if(pos < arr.length + 1)
	{
		for(int i= pos; i <= arr.length; i++)
		{
			arr.data[i+1] = arr.data[i];
		}
	}
	arr.data[pos]=Elem;
	arr.length++;
	return true;
}
bool arraylist::ListDelete(int pos,ElemType &Elem)
{
	if(ListEmpty())
	{
		return false;
	}
	if(pos<1 || pos > arr.length)
	{
		return false;
	}
	Elem = arr.data[pos -1];
	for(int i= pos;i<arr.length;i++)
	{
		arr.data[i -1] = arr.data[i];
	}
	arr.length--;
	return true;
}

int arraylist::ListLength()
{
	return arr.length;
}

void arraylist::UnionList(array &arr2)
{
	int lena = arr.length;
	int lenb = arr2.length;
	int item;
	int flag = 1;

	for(int i = 0;i < lenb; i++)
	{
		if(arr2.length == 0 || i + 1 < 1||i+1 > arr2.length)
			flag = 0;
		item = arr2.data[i];
		if(flag)
		{
			if(Locate(item) == 0)
				ListInsert(++lena,item);
		}
	}
}

bool arraylist::ListTravel()
{
	if(ListEmpty())
	{
		return false;
	}
	for(int i = 0; i<arr.length; i++)
	{
		cout<<arr.data[i]<<" ";
	}
	cout<<endl;
	return true;
}

arraylist::~arraylist()
{
	arr.length = 0;
	for(int i = 0; i< MAXSIZE; i++)
	{
		arr.data[i] = 0;
	}
}
