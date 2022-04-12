#include "PlayLevel.h"
#include "Player.h"
#include "BotUI.h"
#include <GameEngineBase/GameEngineTime.h>

enum class ORDER
{
	BACKGROUND,
	PLAYER,
	MONSTER,
	UI
};

PlayLevel::PlayLevel()
{
}

PlayLevel::~PlayLevel()
{
}

void PlayLevel::Loading()
{
	CreateActor<Player>();
	CreateActor<BotUI>();

}

void PlayLevel::Update()
{
	Time -= GameEngineTime::GetDeltaTime();

	if (0 >= Time)
	{
		BgmPlayer.Stop();
	}
}
void PlayLevel::LevelChangeStart()
{
	// Player->SetPosition();

	BgmPlayer = GameEngineSound::SoundPlayControl("BGM.MP3");
	Time = 5.0f;

}