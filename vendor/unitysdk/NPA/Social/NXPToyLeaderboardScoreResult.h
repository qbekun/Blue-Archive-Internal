#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYLEADERBOARDSCORERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC49D0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyLeaderboardScoreResult_TypeDefinitionIndex = 27286;

	class NXPToyLeaderboardScoreResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYLEADERBOARDSCORERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

