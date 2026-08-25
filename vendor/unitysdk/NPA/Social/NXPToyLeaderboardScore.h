#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYLEADERBOARDSCORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC43D0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyLeaderboardScore_TypeDefinitionIndex = 27261;

	class NXPToyLeaderboardScore : public Il2CppObject
	{
	public:
		::System::String* displayRank; // 0x10
		::System::String* displayScore; // 0x18
		::System::Int64 rank; // 0x20
		::System::Int64 rawScore; // 0x28
		::System::String* scoreHolderDisplayName; // 0x30
		::System::String* scoreHolderHiResImageUrl; // 0x38
		::System::String* scoreHolderIconImageUrl; // 0x40
		::System::String* scoreTag; // 0x48
		::System::Int64 timestampMillis; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYLEADERBOARDSCORE_.CTOR_OFFSET))(nullptr);
		}

	};
}

