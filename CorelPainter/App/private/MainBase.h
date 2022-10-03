
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <MenuBar.h>
#include <Slider.h>


class MainBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainBase(e3::Element* pParent = nullptr);

 
protected:
	MenuBar* mMenuBar = nullptr;
Slider* mSlider = nullptr;
Slider* mSlider2 = nullptr;
Slider* mSlider3 = nullptr;


};

#endif // __MainBase_H__

