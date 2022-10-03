#include "Popup.h"

Popup::Popup(e3::Element* pParent)
	: PopupBase(pParent)
{
	mBrushPanel->SetOnLoadCallback([this]() {
		mMiscPanel->SetWidth(mBrushPanel->GetGeometry().width);
	});
}
