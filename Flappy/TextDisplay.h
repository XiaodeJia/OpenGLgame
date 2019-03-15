/**************************************************************************
* File name           : Pipe.h
* File Id             £ºMyTona_Test_01
* Abstract            £ºThis file is for managing all pipes
*                      -----
* Version             £º1.0
* C++ Version         : 11
* Author              £ºDavid Jia
* Data of compeletion £º26.02.2019
**************************************************************************/
#ifndef _TEXT_DISPLAY_H_
#define _TEXT_DISPLAY_H_
#pragma once

class TextDisplay
{
public:

	TextDisplay();
	~TextDisplay();
	void drawText(const char* text, int length, int x, int y);
private:

};

#endif // !_TEXT_DISPLAY_H_

