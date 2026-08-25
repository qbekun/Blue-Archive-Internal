#pragma once
#include "unitysdk.h"

class UIGearOption;
class UILabel;
class UIWidget;
class GearInfoPopupScrollItem;

#define GEAROPTIONSLOTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22BC8F0)
#define GEAROPTIONSLOTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22BCBF0)

	inline static constexpr unsigned int GearOptionSlotElement_TypeDefinitionIndex = 4792;

	class GearOptionSlotElement : public ::System::Xml::XPath::XPathDocument
	{
	public:
		UIGearOption* option; // 0x28
		UILabel* tierLabel; // 0x30
		UIWidget* widget; // 0x38

		::System::Void SetData(GearInfoPopupScrollItem* arg)
		{
			((::System::Void(*)(GearInfoPopupScrollItem*, ::PVOID))((::PBYTE)hIl2Cpp + GEAROPTIONSLOTELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAROPTIONSLOTELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

