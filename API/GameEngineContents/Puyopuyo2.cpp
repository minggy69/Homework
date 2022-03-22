#include "Puyopuyo2.h"
#include "PlayLevel.h"
#include "EndingLevel.h"
#include "TitleLevel.h"
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngine/GameEngineImageManager.h>

Puyopuyo2::Puyopuyo2()
{
}

Puyopuyo2::~Puyopuyo2()
{
}

void Puyopuyo2::GameInit()
{
	GameEngineWindow::GetInst().SetWindowScaleAndPosition({ 100, 100 }, { 1280, 720 });

	// 리소스를 다 로드하지 못하는 상황이 올수가 없다.

	GameEngineImageManager::GetInst()->Load("C:\\Homework\\API\\Resources\\Image\\Idle.bmp", "Idle.bmp");
	GameEngineImageManager::GetInst()->Load("C:\\Homework\\API\\Resources\\Image\\HPBAR.Bmp", "HPBAR.Bmp");


	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
	ChangeLevel("Play");
}

void Puyopuyo2::GameLoop()
{

}
void Puyopuyo2::GameEnd()
{

}