#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "CorelPainterValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth(60);
        pElement1->SetHeight(200);
        pElement1->SetBackgroundColor(glm::vec4(50, 50, 50, 255));

}
