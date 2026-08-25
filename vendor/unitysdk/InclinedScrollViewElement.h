#pragma once
#include "unitysdk.h"

class UIWidget;
class UIPanel;

#define INCLINEDSCROLLVIEWELEMENT_ADJUSTPOSITION_OFFSET UNITYSDK_OFFSET(0x2056200)
#define INCLINEDSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20563D0)
#define INCLINEDSCROLLVIEWELEMENT_START_OFFSET UNITYSDK_OFFSET(0x20563E0)
#define INCLINEDSCROLLVIEWELEMENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20565B0)

	inline static constexpr unsigned int InclinedScrollViewElement_TypeDefinitionIndex = 3341;

	class InclinedScrollViewElement : public Il2CppObject
	{
	public:
		UIWidget* outline; // 0x18

		::System::Void AdjustPosition(UIPanel* arg)
		{
			((::System::Void(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + INCLINEDSCROLLVIEWELEMENT_ADJUSTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDSCROLLVIEWELEMENT_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCLINEDSCROLLVIEWELEMENT_ONDESTROY_OFFSET))(nullptr);
		}

	};

