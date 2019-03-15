#include "EngineHead.h"
#include "Pipe.h"
#include "Flapper.h"
#include "PipeManager.h"
#include "GameManager.h"

GameManager::GameManager()
{
	mEngine = new Engine();
	mEngine->Initialize("MyGame!");

	Sprite testSprite = Sprite("Assets/Art/Biplane.png", Vector3(Engine::SCREEN_WIDTH / 2, Engine::SCREEN_HEIGHT / 2, 0));
	testSprite.SetScale(0.15f);

	mFlapper = new Flapper(testSprite);
	mPipeManager = new PipeManager();

	mStartSprite = Sprite("Assets/Art/spacetostart.png", Vector3(Engine::SCREEN_WIDTH / 2, Engine::SCREEN_HEIGHT / 2, 0));
	mGameoverSprite = Sprite("Assets/Art/gameover.png", Vector3(Engine::SCREEN_WIDTH / 2, Engine::SCREEN_HEIGHT / 2, 0));
	mGameoverSprite.SetScale(0.15f);

	mState = State::GAME_START;
}

GameManager::~GameManager()
{
	delete mEngine;
	delete mFlapper;
	delete mPipeManager;
}

void GameManager::Start()
{
	while (true)
	{
		if (Keyboard::KeyDown(GLFW_KEY_ESCAPE))
		{
			break;
		}

		mEngine->Update();

		switch (mState)
		{
		case State::GAME_START:
		{
			mEngine->BeginRender();
			mStartSprite.Render();
			mEngine->EndRender();

			if (Keyboard::KeyDown(GLFW_KEY_SPACE) || Mouse::ButtonDown(GLFW_MOUSE_BUTTON_LEFT))
			{
				SetState(State::GAME_PLAY);
			}
		}
		break;
		case State::GAME_PLAY:
		{
			mFlapper->Update();
			mPipeManager->Update();

			mEngine->BeginRender();
			mPipeManager->Render();
			mFlapper->Render();
			mEngine->EndRender();

			bool isDead = mPipeManager->CheckCollision(*mFlapper);
			if (mFlapper->GetSprite().GetPos()->y < 0 || mFlapper->GetSprite().GetPos()->y > Engine::SCREEN_HEIGHT)
			{
				isDead = true;
			}

			if (isDead)
			{
				SetState(State::GAME_OVER);
			}
		}
		break;
		case State::GAME_OVER:
		{
			mEngine->BeginRender();
			mPipeManager->Render();
			mFlapper->Render();
			mGameoverSprite.Render();
			mEngine->EndRender();

			if (Keyboard::KeyDown(GLFW_KEY_SPACE) || Mouse::ButtonDown(GLFW_MOUSE_BUTTON_LEFT))
			{
				SetState(State::GAME_START);
			}
		}
		break;
		default:
			std::cout << "Unhandled game state: " << static_cast<int>(mState) << std::endl;
			break;
		}
	}
}

// Private

void GameManager::SetState(State state)
{
	mState = state;

	if (mState == State::GAME_START)
	{
		mFlapper->Reset();
		mPipeManager->Reset();
	}
}
