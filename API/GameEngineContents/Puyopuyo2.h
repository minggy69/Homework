#pragma once
#include <GameEngine/GameEngine.h>

// ���� : �ѿ�ѿ�2.. �̰�.. ���Ͱ�.. �ֳ�??? �ѿ䰡 �����ΰ�..? �ƴѰ�~
class Puyopuyo2 : public GameEngine
{
public:
	// constrcuter destructer
	Puyopuyo2();
	~Puyopuyo2();

	// delete Function
	Puyopuyo2(const Puyopuyo2& _Other) = delete;
	Puyopuyo2(Puyopuyo2&& _Other) noexcept = delete;
	Puyopuyo2& operator=(const Puyopuyo2& _Other) = delete;
	Puyopuyo2& operator=(Puyopuyo2&& _Other) noexcept = delete;

	void GameInit() override;
	void GameLoop() override;
	void GameEnd() override;

protected:

private:

};

