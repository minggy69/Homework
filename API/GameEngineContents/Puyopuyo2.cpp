#include "Puyopuyo2.h"
#include "PlayLevel.h"
#include "EndingLevel.h"
#include "TitleLevel.h"
#include <GameEngineBase/GameEngineWindow.h>

Puyopuyo2::Puyopuyo2() 
{
}

Puyopuyo2::~Puyopuyo2() 
{
}

void Puyopuyo2::GameInit()
{
	GameEngineWindow::GetInst().SetWindowScaleAndPosition({ 100, 100 }, { 1280, 720 });

	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
	ChangeLevel("Title");
}

void Puyopuyo2::GameLoop()
{

}

void Puyopuyo2::GameEnd()
{

}