#include "sample_object.h"

void Usample_object::begin()
{
	m_UsedByLevelName = "sample_level";
	m_ThisTicks = true;
}

void Usample_object::onHit(RGameObject * hammer, RGameObject * nail, const Rubeus::Awerere::ACollideData & collisionData)
{
}

void Usample_object::tick()
{
}

void Usample_object::onMessage(Rubeus::Message * msg)
{
}
