/*
 * GUI.h
 *
 *  Created on: Sep 5, 2014
 *      Author: awiebe
 */

#ifndef GUI_H_
#define GUI_H_
#include <nds.h>
#include "../types.h"
#include "../Texture2D.h"
namespace tinyUnity
{

typedef void* event;
typedef u8 GUIpx;
struct Rect{unsigned char x,y,xSize,ySize;};
struct GUIStyleState
{
	Texture2D* background;
	rgb textColor;
};
class GUIStyle
{
public:
	static GUIStyle defaultStyle;

	GUIStyleState* active;	//Rendering settings for when the control is pressed down.
	//alignment	//Text alignment.
	//border	//The borders of all background images.
	//clipping	//What to do when the contents to be rendered is too large to fit within the area given.
	GUIpx contentOffset;	//Pixel offset to apply to the content of this GUIstyle.
	GUIpx fixedHeight;	//If non-0, any GUI elements rendered with this style will have the height specified here.
	GUIpx fixedWidth;	//If non-0, any GUI elements rendered with this style will have the width specified here.
	//focused	//Rendering settings for when the element has keyboard focus.
	//font	//The font to use for rendering. If null, the default font for the current GUISkin is used instead.
	GUIpx fontSize;	//The font size to use (for dynamic fonts).
	//fontStyle	//The font style to use (for dynamic fonts).
	//hover	//Rendering settings for when the mouse is hovering over the control.
	//imagePosition	//How image and text of the GUIContent is combined.
	GUIpx lineHeight;	//The height of one line of text with this style, measured in pixels. (Read Only)
	GUIpx margin;	//The margins between elements rendered in this style and any other GUI elements.
	//name	//The name of this GUIStyle. Used for getting them based on name.
	GUIStyleState* normal;	//Rendering settings for when the component is displayed normally.
	GUIStyleState* onActive;	//Rendering settings for when the element is turned on and pressed down.
	//onFocused	//Rendering settings for when the element has keyboard and is turned on.
	//onHover	//Rendering settings for when the control is turned on and the mouse is hovering it.
	//onNormal	//Rendering settings for when the control is turned on.
	GUIpx overflow;	//Extra space to be added to the background image.
	GUIpx padding;	//Space from the edge of GUIStyle to the start of the contents.
	bool richText;	//Enable HTML-style tags for Text Formatting Markup.
	GUIpx stretchHeight;	//Can GUI elements of this style be stretched vertically for better layout?
	GUIpx stretchWidth;	//Can GUI elements of this style be stretched horizontally for better layouting?
	bool wordWrap;	//Should the text be wordwrapped?
};

struct GUISkin
{
	GUIStyle* textArea;
	GUIStyle* button;
};
class GUI {
public:
 static GUISkin skin;

 //present a textbox,message and the virtual keyboard on top of the current gui.
 static char* prompt(char* message);
 static void dismissPrompt();
 static void textArea(char*message);
 static bool button(Rect area,char* title,event buttonUpEvent,event buttonDownEvent);
};

} /* namespace tinyUnity */

#endif /* GUI_H_ */
