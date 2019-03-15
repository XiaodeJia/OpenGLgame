/**************************************************************************
* File name           : Engine.h
* File Id             £ºMyTona_Test_01
* Abstract            £ºThis file is for buffer updation
*                      -----
* Version             £º1.0
* C++ Version         :
* Author              £ºDavid Jia
* Data of compeletion £º26.02.2019
**************************************************************************/
#ifndef _ENGINE_H_
#define _ENGINE_H_

#pragma comment(lib, "opengl32.lib")

class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;
	static float GetDT();

	Engine();
	~Engine();

	bool Initialize(const char* windowTitle);
	void Update();
	void BeginRender();
	void EndRender();

private:
	static GLFWwindow* window;
	static float dt;
	float lastTime;
};

#endif
