#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYKAKAOCONNECTIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4760)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyKakaoConnectionResult_TypeDefinitionIndex = 27277;

	class NXPToyKakaoConnectionResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYKAKAOCONNECTIONRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

