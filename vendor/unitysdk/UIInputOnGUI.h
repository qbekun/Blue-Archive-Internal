#pragma once
#include "unitysdk.h"

class UIInput;

#define UIINPUTONGUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x2309A10)
#define UIINPUTONGUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x2309A60)
#define UIINPUTONGUI_ONGUI_OFFSET UNITYSDK_OFFSET(0x2309A70)

	inline static constexpr unsigned int UIInputOnGUI_TypeDefinitionIndex = 234;

	class UIInputOnGUI : public Il2CppObject
	{
	public:
		UIInput* mInput; // 0x18

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTONGUI_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTONGUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIINPUTONGUI_ONGUI_OFFSET))(nullptr);
		}

	};

