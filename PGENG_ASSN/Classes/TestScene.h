#ifndef __TEST_SCENE_H__
#define __TEST_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

enum ANIMLIST
{
	FRONT = 0,
	LEFT,
	RIGHT,
	BACK,
	NUM_ANIM,
};

class TestScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(TestScene);

	// Callback functions
	void SetListeners();

	// Init animations4
	void InitAnimationActions();

	// Shader Init
	void InitShader();

	//Key Press
	void OnKeyPressed(EventKeyboard::KeyCode _keycode, Event* _event);
	void OnMouseEvent(Event* _event);

	virtual void update(float _dt);

    void InputMouseTestFunction();
    void InputKeyboardTestFunction();
    void SwitchSceneTestFunction();
    void AddSceneTestFunction();
    void PopSceneTestFunction();

private:
    Animate* v_mainCharAnimation[NUM_ANIM];

	GLProgram* proPostProcess;
	RenderTexture* rendtex;
	Sprite* rendtexSprite;
};

#endif // __TEST_SCENE_H__
