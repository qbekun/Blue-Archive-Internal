#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }
class MXButton;
class ScenarioVolumeUIOpener;

#define SCENARIOMODESELECTBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x280C1B0)
#define SCENARIOMODESELECTBUTTON_INITOPENER_OFFSET UNITYSDK_OFFSET(0x280C050)
#define SCENARIOMODESELECTBUTTON_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x280C1C0)

	inline static constexpr unsigned int ScenarioModeSelectButton_TypeDefinitionIndex = 7778;

	class ScenarioModeSelectButton : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeTypes* Type; // 0x10
		MXButton* Button; // 0x18
		ScenarioVolumeUIOpener* uiOpener; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODESELECTBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitOpener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODESELECTBUTTON_INITOPENER_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMODESELECTBUTTON_ONCLICKBUTTON_OFFSET))(nullptr);
		}

	};

