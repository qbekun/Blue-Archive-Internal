#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYGOOGLEPLAYERSTATSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC46E0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyGooglePlayerStatsResult_TypeDefinitionIndex = 27275;

	class NXPToyGooglePlayerStatsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYGOOGLEPLAYERSTATSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

