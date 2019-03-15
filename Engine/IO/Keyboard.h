/**************************************************************************
* File name           : KeyBoard.h
* File Id             ��MyTona_Test_01
* Abstract            ��This file is responsible to record keyboad action 
*                      -----
* Version             ��1.0
* C++ Version         :
* Author              ��David Jia
* Data of compeletion ��26.02.2019
**************************************************************************/
#ifndef _KEY_BOARD_H_
#define _KEYBOARD_H_



class Keyboard
{
public:
	static void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

	static bool KeyDown(int key);
	static bool KeyUp(int key);
	static bool Key(int key);
private:
	static bool keys[];
	static bool keysDown[];
	static bool keysUp[];
};

#endif
