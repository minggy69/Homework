#pragma once
#include "GameEngineBase/GameEngineNameObject.h"
#include <list>
#include <map>

// ���� :
class GameEngine;
class GameEngineActor;
class GameEngineLevel : public GameEngineNameObject
{
	friend GameEngine;
public:
	// constrcuter destructer
	GameEngineLevel();

	//virtual ���̴� ���� �߿�! ��ӹ����� �Ҹ��ڸ� ����ϱ�����
	virtual ~GameEngineLevel();

	// delete Function
	GameEngineLevel(const GameEngineLevel& _Other) = delete;
	GameEngineLevel(GameEngineLevel&& _Other) noexcept = delete;
	GameEngineLevel& operator=(const GameEngineLevel& _Other) = delete;
	GameEngineLevel& operator=(GameEngineLevel&& _Other) noexcept = delete;

protected:
	//�����Լ� 
	//��������鼭 ���ҽ��� ���͸� ���鶧 ���
	virtual void Loading() = 0;
	//�� ������ ���� �����϶� �ؾ������� �����Ѵ�.
	virtual void Update() = 0;
	// Current���� => Next������ �����Ҷ� ���� ������ �����ϴ� �Լ�.
	virtual void SeceneChangeStart() {}
	// Current���� => Next������ �����Ҷ� ���� ������ �����ϴ� �Լ�.
	virtual void SceneChangeEnd() {}

	template<typename ActorType>
		ActorType* CreateActor(const std::string& _Name, int _Order)
	{
			ActorType* NewActor = new ActorType();
			NewActor->SetName(_Name);

			NewActor->SetLevel(this);
			std::list<GameEngineActor*>& Group = AllActor_[_Order];
			Group.push_back(NewActor);

			//// _Order ���͵��� ���ư��� ������ �ǹ��ϰ� �ȴ�.
			//// insert�� find�� ���ÿ� �ϰ� �˴ϴ�.
			//std::map<int, std::list<GameEngineActor*>>::iterator FindGroup
			//	= AllActor_.find(_Order);

			//if (FindGroup == AllActor_.end())
			//{

			//	// AllActor_.insert(std::make_pair(_Order, std::list<GameEngineActor*>()));
			//	// �̰Դ� �����ϴ�.
			//	AllActor_.insert(
			//		std::map<int, std::list<GameEngineActor*>>::value_type(_Order, std::list<GameEngineActor*>())
			//	);
			//	FindGroup = AllActor_.find(_Order);
			//}


		return nullptr;
	}

private:
	//std::vector�� �����ϴ°� �� ���ٰ� ����
	std::map<int, std::list<GameEngineActor*>>AllActor_;

	void ActorUpdate();
	void ActorRender();

};

