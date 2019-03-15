/**************************************************************************
* File name           : Texture.h
* File Id             ��MyTona_Test_01
* Abstract            ��This file uses SOIL to load Texture object as GL_texture
*                      -----
* Version             ��1.0
* C++ Version         : 
* Author              ��David Jia
* Data of compeletion ��26.02.2019
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