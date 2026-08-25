#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }

#define UISCENARIOMODE_PROLOGUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x280F0F0)
#define UISCENARIOMODE_PROLOGUE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x280F180)

	inline static constexpr unsigned int UIScenarioMode_Prologue_TypeDefinitionIndex = 7790;

	class UIScenarioMode_Prologue : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_PROLOGUE_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_PROLOGUE_GET_TYPE_OFFSET))(nullptr);
		}

	};

