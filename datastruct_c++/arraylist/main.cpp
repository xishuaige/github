#include "array.h"

int main()
{
	arraylist list;
	for(int i = 0; i<5; i++)
	{
		list.ListInsert(i,i);
	}
	list.ListTravel();
	int var = 2;
	int pos = list.Locate(var);
	if(pos != 0)
	{
		int result;
		list.ListDelete(pos,result);
		cout<<"delete: "<<result<<endl;
	}
	list.ListTravel();

	array arr2 = {0};
	for(int i = 0; i<4; i++)
		arr2.data[i] = 6;
	arr2.length = 4;
	for(int i= 0 ; i<4; i++)
		cout<<arr2.data[i]<<" ";
	cout<<endl;

	list.UnionList(arr2);
	list.ListTravel();

	system("pause");
	return 0;
}