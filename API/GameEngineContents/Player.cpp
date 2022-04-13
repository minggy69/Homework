#include "Player.h"
#include <GameEngine/GameEngine.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngine/GameEngineImageManager.h>
#include <GameEngineBase/GameEngineInput.h>
#include <GameEngineBase/GameEngineTime.h>
#include <GameEngine/GameEngineRenderer.h>

#include <GameEngine/GameEngineLevel.h> // 레벨을 통해서
#include "Bullet.h" // 총알을 만들고 싶다.

Player::Player()
	: Speed_(500.0f)
	, AccSpeed_(500.0f)
	, MoveDir(float4::ZERO)
{
}

Player::~Player()
{
}

// 아무키도 눌리지 않았다면 false
// 아무키든 눌렸다면 true
bool Player::IsMoveKey()
{
	if (false == GameEngineInput::GetInst()->IsPress("MoveLeft") &&
		false == GameEngineInput::GetInst()->IsPress("MoveRight") &&
		false == GameEngineInput::GetInst()->IsPress("MoveUp") &&
		false == GameEngineInput::GetInst()->IsPress("MoveDown"))
	{
		return false;
	}

	return true;
}

void Player::ChangeState(PlayerState _State)
{
	if (CurState_ != _State)
	{
		switch (_State)
		{
		case Idle:
			IdleStart();
			break;
		case Attck:
			AttackStart();
			break;
		case Move:
			MoveStart();
			break;
		case Max:
			break;
		default:
			break;
		}
	}

	CurState_ = _State;
}

void Player::StateUpdate()
{
	switch (CurState_)
	{
	case Idle:
		IdleUpdate();
		break;
	case Attck:
		AttackUpdate();
		break;
	case Move:
		MoveUpdate();
		break;
	case Max:
		break;
	default:
		break;
	}
}


void Player::Start()
{
	SetPosition(GameEngineWindow::GetScale().Half());
	SetScale({ 5, 5 });

	GameEngineRenderer* Render = CreateRendererToScale("Right_Beam_Kirby.bmp", float4(500, 500));
	Render->SetIndex(10, float4(500, 500));
	// Render->SetPivotType(RenderPivot::BOT);

	Render1 = CreateRendererToScale("Idle.bmp", { 300, 300 }, 100);
	Render1->SetPivot({ 100.0f, 0.0f });
	Render1->SetAlpha(100);




	// CreateRendererToScale("hpbar.bmp", float4(300.0f, 20.0f), RenderPivot::CENTER, float4(0.0f, -100.0f));

	if (false == GameEngineInput::GetInst()->IsKey("MoveLeft"))
	{
		// 이때 대문자여야 합니다.
		GameEngineInput::GetInst()->CreateKey("MoveLeft", 'A');
		GameEngineInput::GetInst()->CreateKey("MoveRight", 'D');
		GameEngineInput::GetInst()->CreateKey("MoveUp", 'W');
		GameEngineInput::GetInst()->CreateKey("MoveDown", 'S');
		GameEngineInput::GetInst()->CreateKey("Jump", VK_LSHIFT);
		GameEngineInput::GetInst()->CreateKey("Fire", VK_SPACE);
		// VK_LBUTTON;
	}
}

void Player::Update()
{
	// 공통함수

	// State

	StateUpdate();


	// 내가 키를 눌렀다면 움직여라.
	//if (0 != GetAsyncKeyState('A'))
	//{
	//	int a = 0;
	//}

}

// 랜더러가 다 돌아가고 랜더링이 됩니다.
void Player::Render()
{
	DebugRectRender();
}
