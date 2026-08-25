#pragma once
#include "unitysdk.h"

#define UIPOPUP_INVISIBLEBLOCK_ONCLICK_OFFSET UNITYSDK_OFFSET(0x276C3F0)
#define UIPOPUP_INVISIBLEBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x276C410)

	inline static constexpr unsigned int UIPopup_InvisibleBlock_TypeDefinitionIndex = 7332;

	class UIPopup_InvisibleBlock : public Il2CppObject
	{
	public:
		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVISIBLEBLOCK_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INVISIBLEBLOCK_.CTOR_OFFSET))(nullptr);
		}

	};

