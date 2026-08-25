#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYGOOGLEPLAYERSTATS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC43C0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyGooglePlayerStats_TypeDefinitionIndex = 27260;

	class NXPToyGooglePlayerStats : public Il2CppObject
	{
	public:
		::System::Single averageSessionLength; // 0x10
		::System::Single churnProbability; // 0x14
		::System::Int32 daysSinceLastPlayed; // 0x18
		::System::Single highSpenderProbability; // 0x1C
		::System::Int32 numberOfPurchases; // 0x20
		::System::Int32 numberOfSessions; // 0x24
		::System::Single sessionPercentile; // 0x28
		::System::Single spendPercentile; // 0x2C
		::System::Single spendProbability; // 0x30
		::System::Single totalSpendNext28Days; // 0x34

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYGOOGLEPLAYERSTATS_.CTOR_OFFSET))(nullptr);
		}

	};
}

