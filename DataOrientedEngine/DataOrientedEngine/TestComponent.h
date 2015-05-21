#pragma once

#include "MemoryPoolManager.h"

struct test
{
	static MemoryPool* m_MemoryPool;
	
	test()
	{
		
	}
	static void* operator new(size_t size)
	{
		if (m_MemoryPool == nullptr)
		{
			m_MemoryPool = new MemoryPool(size);
		}
		return m_MemoryPool->AllocateObject(size);
	}

};

MemoryPool* test::m_MemoryPool = nullptr;