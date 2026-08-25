#pragma once
#include "../../unitysdk.h"

#define NPA_COMMUNITY_NXPTOYCOMMUNITYALARMINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD97E0)

namespace NPA::Community
{
	inline static constexpr unsigned int NXPToyCommunityAlarmInfoResult_TypeDefinitionIndex = 27477;

	class NXPToyCommunityAlarmInfoResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_COMMUNITY_NXPTOYCOMMUNITYALARMINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

