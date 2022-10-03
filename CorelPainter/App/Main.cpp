#include "Main.h"


Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	mPopup = new Popup();
	mPopup->SetVisibility(e3::EVisibility::Hidden);
	AddElement(mPopup);

	mSlider->SetOnClickCallback([this](e3::MouseEvent*) {
		auto g = mSlider->GetGeometry();
		glm::vec2 curPos(0, mPopup->GetGeometry().height / 2);
		glm::vec2 pos(g.x + g.width, g.y + g.height / 2);
		float posY = pos.y - curPos.y;
		float dy = std::max(0.f, mMenuBar->GetGeometry().height + e3::Dim("20dp") - posY);
		if (dy == 0) dy = std::min(0.0f, GetGeometry().height - e3::Dim("20dp") - (posY + mPopup->GetGeometry().height));
		mPopup->SetTranslation(glm::vec3(pos.x - curPos.x + e3::Dim("20dp"), posY + dy, 0));
		mPopup->SetVisibility(e3::EVisibility::Visible);
	});

	mSlider2->SetOnClickCallback([this](e3::MouseEvent*) {
		auto g = mSlider2->GetGeometry();
		glm::vec2 curPos(0, mPopup->GetGeometry().height / 2);
		glm::vec2 pos(g.x + g.width, g.y + g.height / 2);
		float posY = pos.y - curPos.y;
		float dy = std::max(0.f, mMenuBar->GetGeometry().height + e3::Dim("20dp") - posY);
		dy = std::min(0.0f, GetGeometry().height - e3::Dim("20dp") - (posY + mPopup->GetGeometry().height));
		mPopup->SetTranslation(glm::vec3(pos.x - curPos.x + e3::Dim("20dp"), posY + dy, 0));
		mPopup->SetVisibility(e3::EVisibility::Visible);
	});

	mSlider3->SetOnClickCallback([this](e3::MouseEvent*) {
		auto g = mSlider3->GetGeometry();
		glm::vec2 curPos(0, mPopup->GetGeometry().height / 2);
		glm::vec2 pos(g.x + g.width, g.y + g.height / 2);
		float posY = pos.y - curPos.y;
		float dy = std::max(0.f, mMenuBar->GetGeometry().height + e3::Dim("20dp") - posY);
		dy = std::min(0.0f, GetGeometry().height - e3::Dim("20dp") - (posY + mPopup->GetGeometry().height));
		mPopup->SetTranslation(glm::vec3(pos.x - curPos.x + e3::Dim("20dp"), posY + dy, 0));
		mPopup->SetVisibility(e3::EVisibility::Visible);
	});
}
