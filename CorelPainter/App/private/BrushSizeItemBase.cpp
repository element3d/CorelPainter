#include "BrushSizeItemBase.h"

#include <e3/ViewFactory.h>
#include "CorelPainterValues.h"

BrushSizeItemBase::BrushSizeItemBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("50dp");
        this->SetAspectRatio(1.000000);
        this->SetBorderSize("1dp");
        this->SetBorderRadius(4);
        this->SetBorderColor(glm::vec4(50, 50, 50, 255));
        this->SetMargin("5dp");

}
