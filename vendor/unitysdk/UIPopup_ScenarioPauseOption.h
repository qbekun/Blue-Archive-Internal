#pragma once
#include "unitysdk.h"

class UIEventTrigger;

#define UIPOPUP_SCENARIOPAUSEOPTION_SAVEOPTIONS_OFFSET UNITYSDK_OFFSET(0x2772610)
#define UIPOPUP_SCENARIOPAUSEOPTION_INITIALIZEUI_OFFSET UNITYSDK_OFFSET(0x2772650)
#define UIPOPUP_SCENARIOPAUSEOPTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x2772660)
#define UIPOPUP_SCENARIOPAUSEOPTION_LOADOPTIONS_OFFSET UNITYSDK_OFFSET(0x27727E0)
#define UIPOPUP_SCENARIOPAUSEOPTION_ONDOUBLECLICKCHEAT_OFFSET UNITYSDK_OFFSET(0x27728F0)
#define UIPOPUP_SCENARIOPAUSEOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2772980)

	inline static constexpr unsigned int UIPopup_ScenarioPauseOption_TypeDefinitionIndex = 7347;

	class UIPopup_ScenarioPauseOption : public Il2CppObject
	{
	public:
		UIEventTrigger* triggerForCheat; // 0x130

		::System::Void SaveOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOPAUSEOPTION_SAVEOPTIONS_OFFSET))(nullptr);
		}

		::System::Void InitializeUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOPAUSEOPTION_INITIALIZEUI_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOPAUSEOPTION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void LoadOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOPAUSEOPTION_LOADOPTIONS_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClickCheat()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOPAUSEOPTION_ONDOUBLECLICKCHEAT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SCENARIOPAUSEOPTION_.CTOR_OFFSET))(nullptr);
		}

	};

