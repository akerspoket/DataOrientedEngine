#include "EntityManager.h"


EntityManager::EntityManager()
{
	m_NextAvilableEntity = 0;

}


EntityManager::~EntityManager()
{
}


//Gets and updates the next entity
Entity EntityManager::CreateEntity()
{
	Entity r_NextEntity;
	int t_size = m_EmptyEntities.size();
	if (t_size == 0)
	{
		r_NextEntity =  m_NextAvilableEntity;
		m_NextAvilableEntity++;
		return r_NextEntity;
	}
	r_NextEntity = m_EmptyEntities[t_size - 1];
	m_EmptyEntities.pop_back();
	return r_NextEntity;
}
//deletes all components of the entity from memory
void EntityManager::DeleteEntity(Entity p_Entity)
{
	//remove subcomponents here

	m_EmptyEntities.push_back(p_Entity);
}