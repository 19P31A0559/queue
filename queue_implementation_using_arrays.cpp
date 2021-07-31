#include<bits/stdc++.h>
using namespace std;

struct Queue{
	int *arr;
	int cap,size;
	Queue(int c){
		cap=c;
		size=0;
		arr=new int[cap];
	}
	bool is_full()
	{
		return size==cap;
	}
	bool is_empty()
	{
		return size==0;
	}
	void enqueue(int val)
	{
		if(is_full)
		{
			return;
		}
		arr[size]=val;
		size++;
	}
	void deque()
	{
		if(is_empty())
		{
			return;
		}
		for(int i=0;i<size-1;i++)
		{
			arr[i]=arr[i+1];
		}
		size--;
	}
	int getfront()
	{
		if(is_empty())
		{
			return -1;
		}
		return arr[0];
	}
	int getrare()
	{
		if(is_empty)
		{
			return -1;
		}
		return arr[size-1];
	}
};

int main(){
	Queue Q(5);
	Q.enqueue(10);
	Q.enqueue(20);
	Q.enqueue(30);
	Q.dequeue();
	cout<<Q.getfront()<<"\n";
	count<<Q.getrare()<<"\n";
	cout<<Q.is_empty()<<"\n";
	cout<<Q.is_full()<<"\n";
}
