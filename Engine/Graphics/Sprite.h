/**************************************************************************
* File name           : Sprite.h
* File Id             £ºMyTona_Test_01
* Abstract            £ºThis file is used for the operation of texture project
*                      -----
* Version             £º1.0
* C++ Version         : 
* Author              £ºDavid Jia
* Data of compeletion £º26.02.2019
**************************************************************************/
#ifndef _SPRITE_H_
#define _SPRITE_H_

class Sprite
{
public:
	Sprite();
	Sprite(const std::string& imagePath);
	Sprite(const std::string& imagePath, const Vector3& _pos);

	void Update();
	void Render();

	void SpeedTo(float x);
	void SpeedBy(float x);

	void MoveTo(const Vector3& v);
	void MoveBy(Vector3& v);

	void MoveLeft();
	void MoveRight();
	void MoveUp();
	void MoveDown();

	void RotateTo(float x);
	void RotateBy(float x);

	void SetScale(float x);
	void SetScale(const Vector3& v);

	void FlipHorizontal();
	void FlipVertical();

	Vector3* GetPos();
	float*   GetRot();
	Vector3* GetScale();
	Vector3* GetSize();

private:

	float speed;
	float rot;
	Texture texture;
	Vector3 pos;
	Vector3 scale;
	Vector3 size;
};

#endif