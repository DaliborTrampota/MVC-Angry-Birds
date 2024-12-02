#pragma once

#include "LifetimeGameObject.h"
#include "string"

class AbsMissile : public LifetimeGameObject
{
public:
	AbsMissile(Vec2<int> pos, const char* textureName, float angle, int velocity) :
		LifetimeGameObject(pos, textureName),
		m_angle(angle),
		m_velocity(velocity)
	{
	}

	void acceptVisitor(IVisitor* visitor) override;
	float getAngle() const;
	int getVelocity() const;

	static inline unsigned int s_ID = 0;
	static inline const char* s_getName(const char* name);

private:
	float m_angle;
	int m_velocity;
};

