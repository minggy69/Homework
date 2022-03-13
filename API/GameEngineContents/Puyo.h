#pragma once

// Ό³Έν :
class Puyo
{
public:
	// constrcuter destructer
	Puyo();
	~Puyo();

	// delete Function
	Puyo(const Puyo& _Other) = delete;
	Puyo(Puyo&& _Other) noexcept = delete;
	Puyo& operator=(const Puyo& _Other) = delete;
	Puyo& operator=(Puyo&& _Other) noexcept = delete;

protected:

private:

};

