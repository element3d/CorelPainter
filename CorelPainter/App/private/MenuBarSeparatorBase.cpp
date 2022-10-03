#include "MenuBarSeparatorBase.h"

#include <e3/ViewFactory.h>
#include "CorelPainterValues.h"

MenuBarSeparatorBase::MenuBarSeparatorBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("2dp");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(180, 180, 180, 255));

}
