#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "CorelPainterValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        mMenuBar = new MenuBar();
        AddElement(mMenuBar);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetScaling((e3::EScaling)1);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetPadding("20dp");
        pElement2->SetOrientation((e3::EOrientation)1);
        mSlider = new Slider();
        pElement2->AddElement(mSlider);
        mSlider2 = new Slider();
        pElement2->AddElement(mSlider2);
        mSlider2->SetMarginTop("40dp");
        mSlider3 = new Slider();
        pElement2->AddElement(mSlider3);
        mSlider3->SetMarginTop("40dp");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement3);
        pElement3->SetWidth("100%");
        pElement3->SetHeight("100%");
        pElement3->SetScaling((e3::EScaling)1);

}
