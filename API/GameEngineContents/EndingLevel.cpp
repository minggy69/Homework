#include "EndingLevel.h"
#include "GameEngine/GameEngine.h"

EndingLevel::EndingLevel() 
{
}

EndingLevel::~EndingLevel() 
{
}


void EndingLevel::Loading()
{
	//ȸ�縶�� �ٸ����ְ����� Actor�� �����ߵȴ�.
}

void EndingLevel::Update()
{
	GameEngine::GlobalEngine().ChangeLevel("Play");
}