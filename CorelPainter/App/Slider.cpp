#include "Slider.h"

Slider::Slider(e3::Element* pParent)
	: SliderBase(pParent)
{
	BeginPath();
	e3::Element* e = this;
	e->MoveTo(0, 0);
	e->LineTo("100%", 0);
	e->LineTo("50%", "100%");
	e->Close();
	e->EndPath();
}
