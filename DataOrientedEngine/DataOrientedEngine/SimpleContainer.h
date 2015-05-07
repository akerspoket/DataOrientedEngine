#pragma once
#include <assert.h>
#include "Container.h"
#include "GlobalDefines.h"
template <class Component>
class SimpleContainer :
	public Container
{
private:
	Component* m_Components;
	unsigned int m_ContainerSize;
public:
	SimpleContainer(int p_ContainerSize)
	{
		//Alocate memory from ppooooll TODO
		m_ContainerSize = p_ContainerSize;
	};
	~SimpleContainer();
	void AddComponent(Entity p_Entity, Component p_Component)
	{
		if (p_Entity > m_ContainerSize - 1)
			assert();
		else
			m_Components[p_Entity] = Component(p_Component);
	}
	void RemoveComponent(Entity p_Entity)
	{
		if (p_Entity > m_ContainerSize - 1)
			assert();
		else
			//m_Components[]
	}
	Component* GetComponent(Entity p_Entity);
};

