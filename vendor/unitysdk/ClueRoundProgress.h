#pragma once
#include "unitysdk.h"

#define CLUEROUNDPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0x249AC10)

	inline static constexpr unsigned int ClueRoundProgress_TypeDefinitionIndex = 5763;

	class ClueRoundProgress : public Il2CppObject
	{
	public:
		::System::Int32 RoundId; // 0x10
		::System::Int32 CurrentRegisteredCount; // 0x14
		::System::Int32 RequiredCount; // 0x18
		::System::Boolean CanClaimRoundReward; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLUEROUNDPROGRESS_.CTOR_OFFSET))(nullptr);
		}

	};

