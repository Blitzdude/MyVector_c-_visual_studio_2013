#pragma once

using namespace std;
class MyVector
{
public:
	int *myArray;

private:
	int maxSize;
	int currentSize;
	int index;

public: 
	MyVector(int size);
	~MyVector();

	void add(int num);
	void print(); 
	int findNextFreeIndex();

	void deleteIndex(int i);
	bool hasNum(int num);
private:
	void resize(int size);
};

