#pragma once

#include "RandomMovingStrategy.h"
#include "IModel.h"

class TeleportStrategy : public RandomMovingStrategy {
public:
	TeleportStrategy(IModel* model) :
		RandomMovingStrategy(0, 400), 
		m_model(model) {};

	void updatePosition(GameObject* obj, float dt) override;

	const char* name() override {
		return "Teleport";
	}

protected:
	IModel* m_model;
};