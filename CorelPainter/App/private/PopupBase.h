
#ifndef __PopupBase_H__
#define __PopupBase_H__

#include <e3/ViewFactory.h>
#include <BrushSizeItem.h>


class PopupBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    PopupBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBrushPanel = nullptr;
e3::Element* mMiscPanel = nullptr;


};

#endif // __PopupBase_H__

