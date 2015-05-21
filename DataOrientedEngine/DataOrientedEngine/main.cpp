#include <iostream>
#include "MemoryPoolManager.h"
#include "TestComponent.h"

using namespace std;
int main()
{
	cout << "hej";

	MemoryPoolManager* t_memoryPool;
	t_memoryPool = t_memoryPool->GetInstance();
	t_memoryPool->Initialize(1024 * 4 * 1000*500);
	int a = sizeof(int);
	test* t;
	for (size_t i = 0; i < 512; i++)
	{
		t = new test();
	}
	return 0;
}