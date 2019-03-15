#include <iostream>
#include <string>
#include <vector>
#include "GLFW/glfw3.h"
#include "Engine/Math/Vector3.h"
#include "Engine/IO/Keyboard.h"
#include "Engine/IO/Mouse.h"
#include "Engine/Engine.h"
#include "Engine/Graphics/Texture.h"
#include "Engine/Graphics/Sprite.h"

#include "Engine/Math/Rect.h"
#include "Engine/Math/Math.h"
#include "Engine/Physics/Rigidbody.h"
#include "Flappy/Pipe.h"
#include "Flappy/Flapper.h"
#include "Flappy/PipeManager.h"
#include "Flappy/GameManager.h"


int main()
{
	std::cout << "Hello, MyTona!" << std:: endl;
	GameManager gameManager;
	gameManager.Start();

	return 0;
}