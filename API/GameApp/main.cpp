#include <Windows.h>

#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineContents/Puyopuyo2.h>

Puyopuyo2 MyGame;

void GameInit()
{
    //�ؽ�ó�� �ε��ϰ� �غ��ϰ� ������Ʈ�� �̸� ��������
    //�̸����������� ����ü �����ֳ�?

    MyGame.GameInit();

}

void GameLoop()
{
    //������ ����ȴ�.

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