#include "AbsPlayer.h"

void AbsPlayer::acceptVisitor(IVisitor* visitor)
{
	//visitor->visitPlayer(this);
	visitor->visitObject(this);
}