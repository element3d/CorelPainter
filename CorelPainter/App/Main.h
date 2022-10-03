
#ifndef Main_H_
#define Main_H_

#include "private/MainBase.h"
#include "Popup.h"

class E3_EXPORT Main : public MainBase
{
public:
	Main(e3::Element* pParent = nullptr);

	Popup* mPopup = nullptr;
};

#endif // Main_H_

