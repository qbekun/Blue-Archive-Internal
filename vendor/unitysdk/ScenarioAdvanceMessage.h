#pragma once
#include "unitysdk.h"

#define SCENARIOADVANCEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DCEC0)

	inline static constexpr unsigned int ScenarioAdvanceMessage_TypeDefinitionIndex = 7660;

	class ScenarioAdvanceMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOADVANCEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

