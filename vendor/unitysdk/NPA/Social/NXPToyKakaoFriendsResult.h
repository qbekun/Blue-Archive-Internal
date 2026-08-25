#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYKAKAOFRIENDSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4860)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyKakaoFriendsResult_TypeDefinitionIndex = 27281;

	class NXPToyKakaoFriendsResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYKAKAOFRIENDSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

