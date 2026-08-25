#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYKAKAOMESSAGESETTINGSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC48E0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyKakaoMessageSettingsResult_TypeDefinitionIndex = 27283;

	class NXPToyKakaoMessageSettingsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYKAKAOMESSAGESETTINGSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

