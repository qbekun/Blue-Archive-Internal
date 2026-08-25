#pragma once
#include "../../unitysdk.h"

namespace NPA::Social { class NXPKakaoUserInfo; }

#define NPA_SOCIAL_NXPTOYKAKAOUSERINFORESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4960)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyKakaoUserInfoResult_TypeDefinitionIndex = 27284;

	class NXPToyKakaoUserInfoResult : public Il2CppObject
	{
	public:
		::NPA::Social::NXPKakaoUserInfo* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYKAKAOUSERINFORESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

