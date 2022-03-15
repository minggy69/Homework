#pragma once
#include <GameEngineBase/GameEngineNameObject.h>
#include <GameEngineBase/GameEngineMath.h>

// 설명 :
class GameEngineLevel;
class GameEngineActor : public GameEngineNameObject
{
public:
	friend GameEngineLevel;

	// constrcuter destructer
	GameEngineActor();
	virtual ~GameEngineActor();

	// delete Function
	GameEngineActor(const GameEngineActor& _Other) = delete;
	GameEngineActor(GameEngineActor&& _Other) noexcept = delete;
	GameEngineActor& operator=(const GameEngineActor& _Other) = delete;
	GameEngineActor& operator=(GameEngineActor&& _Other) noexcept = delete;

protected:
	//시작할때 뭔가를 하고싶은데 생성자에서는 절대로 못할 부분들을 처리
	virtual void Start() = 0;
	//지속적으로 게임이 실행될때 호출
	virtual void Update()
	{
	}
	//지속적으로 게임이 실행될때 호출
	virtual void Render() 
	{
	}

private:
	GameEngineLevel* Level_;
	float4 Positon_;
	float4 Scale_;

	//나를 만들어준 레벨이야
	inline void SetLevel(GameEngineLevel* _Level)
	{
		Level_ = _Level;
	}



};

