#pragma once

#include "SDLController.h"
#include "SDLDrawer.h"
#include "IView.h"

#include <unordered_map>
#include <string>

class IModel;
class GameObject;
struct SDL_Rect;


// SDL2 View
class SDLView // : public IView
{
public:
	SDLView() = default;
	SDLView(IModel* model);

	void render();
	Rect<int> getWindowRect() const;

	SDLController* getController();

private:
	IModel* m_model;
	SDLController m_cont;
	SDLDrawer m_gameDrawer;
};

