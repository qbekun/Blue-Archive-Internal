#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCharacter;
class FurnitureTimelineType;

#define TIMELINETYPECHARACTERPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x259B920)

	inline static constexpr unsigned int TimelineTypeCharacterPair_TypeDefinitionIndex = 290;

	class TimelineTypeCharacterPair : public Il2CppObject
	{
	public:
		InteractiveWorldRaidCharacter* character; // 0x10
		FurnitureTimelineType* timelineType; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINETYPECHARACTERPAIR_.CTOR_OFFSET))(nullptr);
		}

	};

