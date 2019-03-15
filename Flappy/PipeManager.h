/**************************************************************************
* File name           : Pipe.h
* File Id             ��MyTona_Test_01
* Abstract            ��This file is for managing all pipes 
*                      -----
* Version             ��1.0
* C++ Version         : 11
* Author              ��David Jia
* Data of compeletion ��26.02.2019
**************************************************************************/
#ifndef _PIPE_MANAGER_H_
#define _PIPE_MANAGER_H_

class PipeManager
{
public:
	PipeManager();
	~PipeManager();

	void Update();
	void Render();

	bool CheckCollision(Flapper& flapper);

	void Reset();

private:
	void CreatePipe();

private:
	std::vector<Pipe*> pipes;

	float xStartSeparation;
	float yStartSeparation;
	float xSeparation;
	float ySeparation;
	float minXSeparation;
	float minYSeparation;
	float xSeparationSpeed;
	float ySeparationSpeed;

	int minSpawnY;
	int maxSpawnY;

	int totalPipes;
	int points;
};

#endif
