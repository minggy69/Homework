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

	// ���ҽ��� �� �ε����� ���ϴ� ��Ȳ�� �ü��� ����.

	GameEngineImageManager::GetInst()->Load("D:\\Project\\AR33\\API\\Project\\ApiFrameWork\\Res\\Texture\\Idle.bmp", "Idle.bmp");


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