#include <Windows.h>

#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineContents/Puyopuyo2.h>

Puyopuyo2 MyGame;

void GameInit()
{
    //텍스처를 로딩하고 준비하고 오브젝트를 미리 만들어놓고
    //미리만들어놓을게 도대체 뭐가있냐?

    MyGame.GameInit();

}

void GameLoop()
{
    //게임이 실행된다.

    MyGame.GameLoop();
}
int __stdcall WinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ char* lpCmdLine,
    _In_ int       nCmdShow)

{
    GameEngineDebug::LeakCheckOn();

    GameEngineWindow::GetInst().CreatGameWindow(hInstance, "GameWindow");
    GameEngineWindow::GetInst().ShowGameWindow();
    GameEngineWindow::GetInst().MessageLoop(GameInit, GameLoop);

    GameEngineWindow::Destroy();

    MyGame.GameEnd();
}