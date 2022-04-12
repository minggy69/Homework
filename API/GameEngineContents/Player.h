#pragma once
#include <GameEngine/GameEngineActor.h>
#include <GameEngineBase/GameEngineSound.h>

// ��� ��ü�� 1���� 1���� ���¸��� �����Ѵ�.
// �÷��̾�� 1���� 1���� �Լ��ۿ� �����Ҽ� ����.

// if �÷��̾ ���� ���̶��
//    if �÷��̾ �̵����� �ƴ϶��
//       if

enum PlayerState
{
	Idle,
	Attck,
	Move,
	Max,
};

// ���� :
class Player : public GameEngineActor
{
public:


	// constrcuter destructer
	Player();
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _Other) noexcept = delete;

protected:

private:
	float Speed_;
	float AccSpeed_;

	void Start() override;
	void Update() override;
	void Render() override;



private:
	static float4 NextLevelPosition;

	float4 MoveDir;

	PlayerState CurState_;
	GameEngineRenderer* Render1;

	bool IsMoveKey();
	void KeyMove();

public:
	void ChangeState(PlayerState _State);
	void StateUpdate();

private:
	// FSM���� �ݱⰡ �ֽ��ϴ�.
	void IdleUpdate();
	void AttackUpdate();
	void MoveUpdate();

	void IdleStart();
	void AttackStart();
	void MoveStart();
};

