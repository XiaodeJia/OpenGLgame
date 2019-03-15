/**************************************************************************
* File name           : Pipe.h
* File Id             £ºMyTona_Test_01
* Abstract            £ºThis file is for the pipe operation
*                      -----
* Version             £º1.0
* C++ Version         : 11
* Author              £ºDavid Jia
* Data of compeletion £º26.02.2019
**************************************************************************/
#ifndef _PIPE_H_
#define _PIPE_H_


class Pipe
{
public:
	static Sprite* pipeSprite;
	static void Initialize();

	Pipe();
	Pipe(Vector3 _pos);
	~Pipe();
	void SetGap(float _gap);
	float GetPrevPos();

	void Update();
	void Render();

	void MoveTo(Vector3 to);
	void MoveBy(Vector3 by);

	float GetX();
	float GetWidth();

	Rigidbody GetTopRB();
	Rigidbody GetBotRB();

private:
	void UpdatePos();
	Sprite topSprite;
	Sprite botSprite;
	Rigidbody topRB;
	Rigidbody botRB;

	Vector3 pos;
	float prevPos;
	float gap;
	float speed;
};

#endif
