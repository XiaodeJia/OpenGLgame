/**************************************************************************
* File name           : GameManager.h
* File Id             ��MyTona_Test_01
* Abstract            ��This file is used for operation the game process
*                      -----
* Version             ��1.0
* C++ Version         : 11
* Author              ��David Jia
* Data of compeletion ��26.02.2019
**************************************************************************/
#ifndef _GAME_MANAGER_H_
#define _GAME_MANAGER_H_

class GameManager
{
public:
	enum class State
	{
		GAME_START,
		GAME_PLAY,
		GAME_OVER,
		GAME_COUNT
	};

public:
	GameManager();
	~GameManager();

	void Start();

private:
	void SetState(State state);

private:
	Engine* mEngine;
	Flapper* mFlapper;
	PipeManager* mPipeManager;
	Sprite mStartSprite;
	Sprite mGameoverSprite;
	State mState;
};

#endif
