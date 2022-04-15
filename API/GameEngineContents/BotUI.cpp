#include "BotUI.h"
#include "Player.h"

BotUI::BotUI()
{
}

BotUI::~BotUI()
{
}


void BotUI::Start()
{
	SetPosition({ 640, 600 });
	SetScale({ 1280, 200 });
}

void BotUI::Render()
{
	Player* MainPlayer = GetLevel()->FindActor<Player>("MainPlayer");

	// Player::MainPlayer->SetPosition();

	DebugRectRender();
}