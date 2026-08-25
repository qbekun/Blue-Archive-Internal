#pragma once
#include "unitysdk.h"

namespace FlatData { class ScenarioModeTypes; }

#define UISCENARIOMODE_SPECIALOPERATIONUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x28111E0)
#define UISCENARIOMODE_SPECIALOPERATIONUNIT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2811270)

	inline static constexpr unsigned int UIScenarioMode_SpecialOperationUnit_TypeDefinitionIndex = 7798;

	class UIScenarioMode_SpecialOperationUnit : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SPECIALOPERATIONUNIT_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeTypes* get_Type()
		{
			return ((::FlatData::ScenarioModeTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_SPECIALOPERATIONUNIT_GET_TYPE_OFFSET))(nullptr);
		}

	};

