/**************************************************************************
* File name           : Texture.h
* File Id             £ºMyTona_Test_01
* Abstract            £ºThis file uses SOIL to load Texture object as GL_texture
*                      -----
* Version             £º1.0
* C++ Version         : 
* Author              £ºDavid Jia
* Data of compeletion £º26.02.2019
**************************************************************************/
#ifndef _TEXTURE_H_
#define _TEXTURE_H_


class Texture
{
public:
	Texture();
	Texture(int _id);
	Texture(const std::string& path);

	int GetID();
	int GetWidth();
	int GetHeight();

private:
	bool GetTextureParams();
	int id;
	int width;
	int height;
};

#endif