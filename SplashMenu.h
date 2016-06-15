#ifndef __SplashMenu_H__
#define __SplashMenu_H__
#include <Arduino.h>
#include "AbstractState.h"
#include "Settings.h"

class SplashMenu : public AbstractState 
{
  public:
    SplashMenu();
    void Init(String text, bool returnToNodeMenu);
    virtual void Init() override;
    virtual AbstractState* Tick() override;
  private:
    bool returnToNodeMenu;
    String text;
};

#endif // __SplashMenu_H__
