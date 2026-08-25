#pragma once
#include "unitysdk.h"

#define WORLDRAIDSCHOOLFILTERCLICKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF1680)

	inline static constexpr unsigned int WorldRaidSchoolFilterClickMessage_TypeDefinitionIndex = 8743;

	class WorldRaidSchoolFilterClickMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDSCHOOLFILTERCLICKMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

