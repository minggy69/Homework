#include "Puyopuyo2.h"
#include "PlayLevel.h"
#include "EndingLevel.h"
#include "TitleLevel.h"
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineBase/GameEngineDirectory.h>
#include <GameEngineBase/GameEngineFile.h>
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


	// ���� ���丮
	GameEngineDirectory ResourcesDir;
	ResourcesDir.MoveParent("API");
	ResourcesDir.Move("Resources");
	ResourcesDir.Move("Image");

	// �����ȿ� ��� �̹��� ������ ã�´�.
	std::vector<GameEngineFile> AllImageFileList = ResourcesDir.GetAllFile("Bmp");

	for (size_t i = 0; i < AllImageFileList.size(); i++)
	{
		GameEngineImageManager::GetInst()->Load(AllImageFileList[i].GetFullPath());
	}


	GameEngineImage* Image = GameEngineImageManager::GetInst()->Find("Right_Beam_Kirby.bmp");
	Image->Cut({ 256, 256 });

	// 

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