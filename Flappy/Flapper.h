/**************************************************************************
* File name           : Flapper.h
* File Id             £ºMyTona_Test_01
* Abstract            £ºThis file is used for flappy to use all engine head files
*                      -----
* Version             £º1.0
* C++ Version         : 11
* Author              £ºDavid Jia
* Data of compeletion £º26.02.2019
**************************************************************************/
#ifndef _FLAPPER_H_
#define _FLAPPER_H_


class Flapper
{
public:
	
	Flapper();
	Flapper(Sprite _sprite);

	void Update();
	void Render();

	void Flap();

	Sprite& GetSprite();
	Rigidbody& GetRB();

	void Reset();

private:
	void HandleInput();

private:
	Sprite sprite;
	Rigidbody rb;

	float flapForce;
	float maxRot;
	float minRot;
};

#endif
