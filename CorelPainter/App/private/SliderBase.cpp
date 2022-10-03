#include "SliderBase.h"

#include <e3/ViewFactory.h>
#include "CorelPainterValues.h"

SliderBase::SliderBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(30);
        this->SetHeight(150);
        this->SetBackgroundColor(glm::vec4(50, 50, 50, 255));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetAspectRatio(1.000000);
        pElement1->SetBorderRadius(0.5);
        pElement1->SetBackgroundColor(glm::vec4(220, 220, 220, 255));
        pElement1->SetBorderSize("1dp");
        pElement1->SetBorderColor(glm::vec4(0, 0, 0, 255));

}
