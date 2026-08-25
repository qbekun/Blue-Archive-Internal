#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYKAKAOCONNECTIONSTATUSRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC47E0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyKakaoConnectionStatusResult_TypeDefinitionIndex = 27279;

	class NXPToyKakaoConnectionStatusResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYKAKAOCONNECTIONSTATUSRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

