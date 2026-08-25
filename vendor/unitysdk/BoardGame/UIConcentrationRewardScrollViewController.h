#pragma once
#include "../unitysdk.h"

#define BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE126A0)
#define BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWCONTROLLER_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xE126E0)

namespace BoardGame
{
	inline static constexpr unsigned int UIConcentrationRewardScrollViewController_TypeDefinitionIndex = 10297;

	class UIConcentrationRewardScrollViewController : public ::System::Xml::DocumentXPathNodeIterator_ElemChildren_NoLocalName
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWCONTROLLER_REFRESHITEMS_OFFSET))(arg, nullptr);
		}

	};
}

