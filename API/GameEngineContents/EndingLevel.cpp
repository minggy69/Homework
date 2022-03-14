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
	//회사마다 다를수있겠지만 Actor를 만들어야된다.
}

void EndingLevel::Update()
{
	GameEngine::GlobalEngine().ChangeLevel("Play");
}