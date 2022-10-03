#include "IconBase.h"

#include <e3/ViewFactory.h>
#include "CorelPainterValues.h"

IconBase::IconBase(e3::Element* pParent)
	: e3::FontIcon(pParent)
{
        this->SetWidth("18dp");
        this->SetAspectRatio(1.000000);
        this->SetFont(_s(CorelPainter/icons/icons.ttf));
        this->SetColor(glm::vec4(40, 40, 40, 255));
        this->SetMarginLeft("20dp");
        this->SetMarginRight("20dp");

}
