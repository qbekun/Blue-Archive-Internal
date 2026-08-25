#pragma once
#include "unitysdk.h"

class UILabel;

#define UILABELHYPERLINK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC8B780)
#define UILABELHYPERLINK_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8B790)
#define UILABELHYPERLINK_ONCLICK_OFFSET UNITYSDK_OFFSET(0xC8B7A0)

	inline static constexpr unsigned int UiLabelHyperLink_TypeDefinitionIndex = 9094;

	class UiLabelHyperLink : public Il2CppObject
	{
	public:
		::System::Boolean OpenBrowser; // 0x18
		UILabel* HyperLinkLabel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABELHYPERLINK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABELHYPERLINK_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILABELHYPERLINK_ONCLICK_OFFSET))(nullptr);
		}

	};

