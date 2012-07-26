//
//  EntityManager.h
//  lazy-crab
//
//  Created by Simon Jentsch on 23.07.12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef lazy_crab_EntityManager_h
#define lazy_crab_EntityManager_h

#include <vector>
#include <string>
#include "Entity.h"

using namespace std;

class EntityManager {
  
private:  
  vector<Entity*> entities;
  
public:
  EntityManager();
  Entity* getEntity(string id) const;
  vector<Entity*> getNearbyEntities(Entity* entity, float distance=5.0f) const;
  
  Entity* addEntity(Entity* entity);
  void removeEntity(string id);
  void updateRender();
};


#endif
