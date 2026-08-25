#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYACHIEVEMENTSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC43E0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyAchievementsResult_TypeDefinitionIndex = 27263;

	class NXPToyAchievementsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYACHIEVEMENTSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

