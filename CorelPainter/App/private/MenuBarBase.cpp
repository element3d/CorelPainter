#include "MenuBarBase.h"

#include <e3/ViewFactory.h>
#include "CorelPainterValues.h"

MenuBarBase::MenuBarBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("40dp");
        this->SetAlignItemsHor((e3::EAlignment)3);
        this->SetBackgroundColor(glm::vec4(200, 200, 200, 255));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetHeight("100%");
                Icon* pCustomView1 = new Icon();
        pElement1->AddElement(pCustomView1);
        pCustomView1->SetCharcode(59394);
                MenuBarSeparator* pCustomView2 = new MenuBarSeparator();
        pElement1->AddElement(pCustomView2);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetPaddingLeft("10dp");
        pElement2->SetPaddingRight("10dp");
                Icon* pCustomView3 = new Icon();
        pElement2->AddElement(pCustomView3);
        pCustomView3->SetCharcode(59395);
        pCustomView3->SetMarginRight(0);
                Icon* pCustomView4 = new Icon();
        pElement2->AddElement(pCustomView4);
        pCustomView4->SetCharcode(61741);
        pCustomView4->SetMarginRight(0);
                Icon* pCustomView5 = new Icon();
        pElement2->AddElement(pCustomView5);
        pCustomView5->SetCharcode(59396);
                MenuBarSeparator* pCustomView6 = new MenuBarSeparator();
        pElement1->AddElement(pCustomView6);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement3);
                Icon* pCustomView7 = new Icon();
        pElement3->AddElement(pCustomView7);
        pCustomView7->SetCharcode(59413);
        pCustomView7->SetMarginRight(0);
                Icon* pCustomView8 = new Icon();
        pElement3->AddElement(pCustomView8);
        pCustomView8->SetCharcode(59397);
                MenuBarSeparator* pCustomView9 = new MenuBarSeparator();
        pElement1->AddElement(pCustomView9);
                Icon* pCustomView10 = new Icon();
        pElement1->AddElement(pCustomView10);
        pCustomView10->SetCharcode(61918);
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement4);
                Icon* pCustomView11 = new Icon();
        pElement4->AddElement(pCustomView11);
        pCustomView11->SetCharcode(59394);

}
