#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeSubTypes; }

#define UISCENARIOMODE_MAINVOLUME_SERIES2_GET_SUBTYPE_OFFSET UNITYSDK_OFFSET(0x280ACB0)
#define UISCENARIOMODE_MAINVOLUME_SERIES2_.CTOR_OFFSET UNITYSDK_OFFSET(0x280ACC0)
#define UISCENARIOMODE_MAINVOLUME_SERIES2_CREATELASTSELECTION_OFFSET UNITYSDK_OFFSET(0x280AD60)

	inline static constexpr unsigned int UIScenarioMode_MainVolume_Series2_TypeDefinitionIndex = 7777;

	class UIScenarioMode_MainVolume_Series2 : public Il2CppObject
	{
	public:
		::FlatData::ScenarioModeSubTypes* get_SubType()
		{
			return ((::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_SERIES2_GET_SUBTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_SERIES2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CreateLastSelection()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_MAINVOLUME_SERIES2_CREATELASTSELECTION_OFFSET))(nullptr);
		}

	};

