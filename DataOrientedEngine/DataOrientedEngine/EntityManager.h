#pragma once

//This class keeps tracks of what entity number is avilable
#include <vector>
#include "GlobalDefines.h"
using namespace std;

class EntityManager
{
private:
	Entity m_NextAvilableEntity;
	vector<Entity> m_EmptyEntities;
public:
	EntityManager();
	~EntityManager();
	//Gets and updates the next entity
	Entity CreateEntity();
	//deletes all components of the entity from memory
	void DeleteEntity(Entity p_Entity);
	 

};

