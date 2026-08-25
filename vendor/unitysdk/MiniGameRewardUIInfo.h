#pragma once
#include "unitysdk.h"

#define MINIGAMEREWARDUIINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2060030)

	inline static constexpr unsigned int MiniGameRewardUIInfo_TypeDefinitionIndex = 3397;

	class MiniGameRewardUIInfo : public Il2CppObject
	{
	public:
		::System::String* SectionText; // 0x10
		::System::Boolean Clear; // 0x18
		::System::Boolean IsHard; // 0x19
		Il2CppObject* RewardInfo; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEREWARDUIINFO_.CTOR_OFFSET))(nullptr);
		}

	};

