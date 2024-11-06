#pragma once

#include "Math.h"

#include <functional>
#include <vector>

class Game;
class GameObject;
class AbsPlayer;
class AbsMissile;
class IGameObjectFactory;

class Model
{

public:
	Model() = default;
	Model(Game* game);

	void aimUp();
	void aimDown();
	void shoot();

	AbsPlayer* getPlayer() const;
	std::vector<GameObject*> getObjects() const;


private:
	Game* m_game;
	IGameObjectFactory* m_objectFactory;

	AbsPlayer* m_player;
	std::vector<AbsMissile*> m_missiles;

	void Update(float dt);

	friend class Game;
};

