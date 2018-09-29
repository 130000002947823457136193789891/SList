#include<iostream>
#define MAXSIZE 100
typedef int DataType;

using namespace std;
class SequenList
{
public:
	friend void Part(SequenList &L);
private:
	DataType data[MAXSIZE];
	int len;
};

void Part(SequenList &L)
{
	int i,j;
	DataType a;
	a=L.data [0];
	i=0;
	j=L.len-1;
	while(i<j)
	{
		while((i<j)&&(L.data[j]>=a))j--;
		L.data [i]=L.data [j];
		while ((i<j)&&(L.data [i]<=a))i++;
		L.data [j]=L.data [i];
	}
	L.data [i]=a;
}
int main ()
{
	return 0;
}