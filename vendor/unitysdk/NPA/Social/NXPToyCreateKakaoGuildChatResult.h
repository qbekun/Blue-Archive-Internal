#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYCREATEKAKAOGUILDCHATRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC45E0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyCreateKakaoGuildChatResult_TypeDefinitionIndex = 27271;

	class NXPToyCreateKakaoGuildChatResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYCREATEKAKAOGUILDCHATRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

