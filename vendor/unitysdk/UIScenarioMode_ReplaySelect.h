#pragma once
#include "unitysdk.h"

#define UISCENARIOMODE_REPLAYSELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x280F190)
#define UISCENARIOMODE_REPLAYSELECT_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x280F610)
#define UISCENARIOMODE_REPLAYSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x280F630)

	inline static constexpr unsigned int UIScenarioMode_ReplaySelect_TypeDefinitionIndex = 7791;

	class UIScenarioMode_ReplaySelect : public Il2CppObject
	{
	public:
		Il2CppObject* modeButtons; // 0xD8
		Il2CppObject* Types; // 0xE0

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECT_SETDATA_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECT_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_REPLAYSELECT_.CTOR_OFFSET))(nullptr);
		}

	};

