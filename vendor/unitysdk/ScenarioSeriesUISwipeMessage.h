#pragma once
#include "unitysdk.h"

#define SCENARIOSERIESUISWIPEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2810C70)

	inline static constexpr unsigned int ScenarioSeriesUISwipeMessage_TypeDefinitionIndex = 7797;

	class ScenarioSeriesUISwipeMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Boolean IsLeftSwipe; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSERIESUISWIPEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

