#pragma once

#include "MemoryPoolManager.h"



#define MEM_POOL_HEADER static MemoryPool* m_MemoryPool; static void* operator new(size_t size)	{if (m_MemoryPool == nullptr){m_MemoryPool = new MemoryPool(size);	}return m_MemoryPool->AllocateObject(size);	}

#define MEM_POOL_BODY (struct test) MemoryPool* test::m_MemoryPool = nullptr;


struct test
{
	test()
	{

	}
	MEM_POOL_HEADER
};

MemoryPool* test::m_MemoryPool = nullptr;