#pragma once
#include <GameEngine/GameEngine.h>

// 설명 : 뿌요뿌요2.. 이건.. 몬스터가.. 있나??? 뿌요가 몬스터인가..? 아닌가~
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

