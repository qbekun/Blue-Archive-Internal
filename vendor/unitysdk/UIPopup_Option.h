#pragma once
#include "unitysdk.h"

class UIEventTrigger;

#define UIPOPUP_OPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x271B120)
#define UIPOPUP_OPTION_INITIALIZEUI_OFFSET UNITYSDK_OFFSET(0x271B140)
#define UIPOPUP_OPTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x271B150)
#define UIPOPUP_OPTION_ONDOUBLECLICKCHEAT_OFFSET UNITYSDK_OFFSET(0x271BC40)

	inline static constexpr unsigned int UIPopup_Option_TypeDefinitionIndex = 7156;

	class UIPopup_Option : public Il2CppObject
	{
	public:
		UIEventTrigger* triggerForCheat; // 0x170

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_INITIALIZEUI_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClickCheat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_ONDOUBLECLICKCHEAT_OFFSET))(nullptr);
		}

	};

