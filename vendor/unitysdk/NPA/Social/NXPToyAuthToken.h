#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYAUTHTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC43B0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyAuthToken_TypeDefinitionIndex = 27259;

	class NXPToyAuthToken : public Il2CppObject
	{
	public:
		::System::String* sns; // 0x10
		::System::String* accessToken; // 0x18
		::System::String* secretToken; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYAUTHTOKEN_.CTOR_OFFSET))(nullptr);
		}

	};
}

